//
//  AMPApiManager.m
//  AHSapp
//
//  Created by jugang.tang on 2019/10/17.
//  Copyright © 2019 ShangHai Yue Yi Network Information Technology Co., Ltd. All rights reserved.
//

#import "AMPApiManager.h"

@implementation AMPApiManager

+ (instancetype)sharedManager {
    static dispatch_once_t onceToken;
    static AMPApiManager *instance;
    dispatch_once(&onceToken, ^{
        instance = [[AMPApiManager alloc] init];
    });
    return instance;
}

#pragma mark - AMPBridgeModuleDelegate
- (id)amp_getNativeData:(NSString *)methodName {
    if ([methodName isEqualToString:@"envType"]) {
        return @"1";
    }
    
    return nil;
}

- (void)amp_openNativeUrlWithName:(NSString *)name props:(NSDictionary *)props {
}

- (void)amp_openWebłrl:(NSString *)url params:(NSDictionary *)params {
}

- (void)amp_sendEvent:(NSDictionary *)data {
}


@end
