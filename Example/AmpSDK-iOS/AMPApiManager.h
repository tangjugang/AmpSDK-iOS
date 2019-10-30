//
//  AMPApiManager.h
//  AHSapp
//
//  Created by jugang.tang on 2019/10/17.
//  Copyright © 2019 ShangHai Yue Yi Network Information Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AmpSDK_iOS/AmpSDK_iOS.h>

NS_ASSUME_NONNULL_BEGIN

@interface AMPApiManager : NSObject<AMPBridgeModuleDelegate>

+ (instancetype)sharedManager;

@end

NS_ASSUME_NONNULL_END
