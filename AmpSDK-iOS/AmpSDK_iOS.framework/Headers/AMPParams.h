//
//  AMPParams.h
//  AmpSDK-iOS-Framework
//
//  Created by jugang.tang on 2019/9/25.
//  Copyright © 2019 ShangHai Yue Yi Network Information Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AMPParams : NSObject

/// 唯一标识
@property (nonatomic, assign) NSInteger bundleId;

/// 初始化URL
@property (nonatomic, nullable, copy) NSString *initialUrl;

/// 初始化传参
@property (nonatomic, nullable, strong) NSDictionary *initialProperties;

/// 业务版本号（必传，格式 x.x.x   例如 0.1.0）
@property (nonatomic, copy) NSString *businessSdkVersion;

/// 是否隐藏RN控制器导航栏
@property (nonatomic, assign) BOOL hideNavigation;

/// 是否关闭间隔90s检查更新
@property (nonatomic, assign) BOOL closeCheckup;

/// 检查更新是否调用debug环境
@property (nonatomic, assign) BOOL isDebugCheckup;

@end

NS_ASSUME_NONNULL_END
