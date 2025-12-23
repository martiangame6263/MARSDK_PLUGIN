//
//  EPPayData.h
//  EPSDK
//
//  Created by 火星人 on 2021/12/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EPPayData : NSObject

@property (nonatomic, assign) int payType;            // 支付方式
                                                      // 1：支付宝；2：微信；4：X币；5：AppStore，6：微信H5，7:支付宝H5
                                                      // 8.AppStore订阅
@property (nonatomic, assign) int price;              // 金额（单位：分）
@property (nonatomic, strong) NSString *productID;    // 商品ID
@property (nonatomic, strong) NSString *productName;  // 商品名称
@property (nonatomic, strong) NSString *productDesc;  // 商品描述
@property (nonatomic, strong) NSString *roleID;       // 角色ID
@property (nonatomic, strong) NSString *roleName;     // 角色名称
@property (nonatomic, strong) NSString *roleLevel;    // 角色等级
@property (nonatomic, strong) NSString *serverID;     // 服务器ID
@property (nonatomic, strong) NSString *serverName;   // 服务器名称
@property (nonatomic, strong) NSString *vip;          // vip等级
@property (nonatomic, strong) NSString *extra;        // 游戏扩展数据，支付通知回调的时候， 原样返回
@property (nonatomic, strong) NSString *payNotifyUrl; // 支付回调地址
@property (nonatomic, strong) NSString *introductoryPrice; // 订阅优惠价格

@end

NS_ASSUME_NONNULL_END
