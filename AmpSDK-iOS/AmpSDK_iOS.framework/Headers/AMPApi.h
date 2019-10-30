//
//  AMPApi.h
//  AHSapp
//
//  Created by jugang.tang on 2019/9/25.
//  Copyright © 2019 ShangHai Yue Yi Network Information Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AMPParams.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AMPBridgeModuleDelegate <NSObject>
@optional

- (id)amp_getNativeData:(NSString *)methodName;
- (void)amp_sendEvent:(NSDictionary *_Nullable)data;
- (void)amp_openNativeUrlWithName:(NSString *_Nullable)name props:(NSDictionary *_Nullable)props;
- (void)amp_openWebUrl:(NSString *_Nullable)url params:(NSDictionary *_Nullable)params;

@end

@interface AMPApi : NSObject

/// 注册代理
+ (void)registerAmpDelegate:(id<AMPBridgeModuleDelegate>)delegate;

/// 加载AMP包
+ (void)loadBundleWithParams:(AMPParams *)ampModel;

/// iOS发通知给RN
+ (BOOL)sendNotificationWithName:(NSString *)name body:(id)body;

/// 是否打开调试日志
+ (void)openLog:(BOOL)isOpen;

@end

NS_ASSUME_NONNULL_END
