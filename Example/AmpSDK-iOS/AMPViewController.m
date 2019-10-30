//
//  AMPViewController.m
//  AmpSDK-iOS
//
//  Created by tangjugang on 10/29/2019.
//  Copyright (c) 2019 tangjugang. All rights reserved.
//

#import "AMPViewController.h"
#import "AMPEnterController.h"

@interface AMPViewController ()

@end

@implementation AMPViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [NSURL URLWithString:@"https://baidu.com"];
}

- (IBAction)ampClicked:(id)sender {
    AMPEnterController *vc = [[AMPEnterController alloc] initWithNibName:NSStringFromClass([AMPEnterController class]) bundle:nil];
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
