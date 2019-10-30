//
//  AMPEnterController.m
//  AHSapp
//
//  Created by jugang.tang on 2019/8/23.
//  Copyright © 2019 ShangHai Yue Yi Network Information Technology Co., Ltd. All rights reserved.
//

#import "AMPEnterController.h"
#import <AmpSDK_iOS/AMPApi.h>

@interface AMPEnterController ()<UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *versionTF;
@property (weak, nonatomic) IBOutlet UILabel *urlLabel;
@property (nonatomic, assign) BOOL closeCheckup;

@end

@implementation AMPEnterController

- (void)viewWillAppear:(BOOL)animated {
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.title = @"AMP-有你更精彩";
    _versionTF.delegate = self;
    _versionTF.text = @"6";
    _urlLabel.text = [NSString stringWithFormat:@"ahs://amp.aihuishou.com/test?bundleId=%@",_versionTF.text];
}

- (IBAction)enterBtnClicked:(id)sender {
    if (_versionTF.text.length == 0) {
        return;
    }
    AMPParams *api = [AMPParams new];
    api.hideNavigation = NO;
    api.initialProperties = nil;
    api.initialUrl = _urlLabel.text;
    api.bundleId = [_versionTF.text integerValue];
    api.closeCheckup = _closeCheckup;
    BOOL isPreview = NO;
    #if DEBUG
        isPreview = YES;
    #endif
    api.isDebugCheckup = isPreview;
    [AMPApi loadBundleWithParams:api];
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string {
    NSMutableString *curText = [[NSMutableString alloc] initWithString:textField.text];
    if ([string isEqualToString:@""] && textField.text.length > 0) {
        [curText deleteCharactersInRange:NSMakeRange(textField.text.length - 1, 1)];
    } else {
        [curText appendString:string];
    }
    _urlLabel.text = [NSString stringWithFormat:@"ahs://amp.aihuishou.com/test?bundleId=%@", curText];
    return YES;
}

- (IBAction)checkupAction:(UISwitch *)sender {
    _closeCheckup = !sender.on;
}


@end
