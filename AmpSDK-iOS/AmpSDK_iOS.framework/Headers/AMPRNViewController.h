//
//  AMPRNViewController.h
//  AmpSDK-iOS-Framework
//
//  Created by jugang.tang on 2019/8/26.
//  Copyright © 2019 ShangHai Yue Yi Network Information Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <React/RCTRootView.h>

NS_ASSUME_NONNULL_BEGIN

@interface AMPRNViewController : UIViewController

@property (nonatomic, assign) NSInteger bundleId;
@property (nonatomic, copy) NSString *bundleUrl;
@property (nonatomic, copy) NSString *moduleName;
@property (nonatomic, nullable, strong) NSString *initialUrl;
@property (nonatomic, nullable, strong) NSDictionary *initialProperties;
@property (nonatomic, assign) BOOL hideNavigation;

@end

@interface RNRootViewModel : NSObject

@property (nonatomic, strong) RCTRootView *view;

@end

NS_ASSUME_NONNULL_END
