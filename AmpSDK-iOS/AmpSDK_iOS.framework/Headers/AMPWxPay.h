//
//  AMPWxPay.h
//  AmpSDK-iOS-Framework
//
//  Created by jugang.tang on 2020/5/13.
//  Copyright © 2020 jugang.tang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AMPWxPay : NSObject

/** 商家向财付通申请的商家id */
@property (nonatomic, nullable, copy) NSString *partnerId;
/** 预支付订单 */
@property (nonatomic, nullable, copy) NSString *prepayId;
/** 随机串，防重发 */
@property (nonatomic, nullable, copy) NSString *nonceStr;
/** 时间戳，防重发 */
@property (nonatomic, assign) UInt32 timeStamp;
/** 商家根据财付通文档填写的数据和签名 */
@property (nonatomic, nullable, copy) NSString *package;
/** 商家根据微信开放平台文档对数据做的签名 */
@property (nonatomic, nullable, copy) NSString *sign;

@end

NS_ASSUME_NONNULL_END
