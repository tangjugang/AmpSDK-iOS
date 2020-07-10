//
//  AMPApi.h
//  AmpSDK-iOS-Framework
//
//  Created by jugang.tang on 2019/9/25.
//  Copyright © 2019 ShangHai Yue Yi Network Information Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AMPParams.h"
#import "AMPWxPay.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^PayResultBlock)(NSDictionary *_Nullable resp);

@protocol AMPBridgeModuleDelegate <NSObject>
@optional

- (id)amp_getNativeData:(NSString *)methodName;
- (void)amp_sendEvent:(NSDictionary *_Nullable)data;
- (void)amp_openNativeUrlWithName:(NSString *_Nullable)name props:(NSDictionary *_Nullable)props;
- (void)amp_openWebUrl:(NSString *_Nullable)url params:(NSDictionary *_Nullable)params;
- (void)amp_openWxMiniProgram:(NSString *_Nullable)appId path:(NSString *_Nullable)path;

// 支付相关
- (void)amp_aliPayWithOrder:(NSString *)order result:(PayResultBlock)result;
- (void)amp_wxPayWithReqModel:(AMPWxPay *)reqModel result:(PayResultBlock)result;
- (BOOL)amp_isWXAppInstalled;

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
