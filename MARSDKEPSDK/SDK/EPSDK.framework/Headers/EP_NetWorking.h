//
//  EP_NetWorking.h
//  EPSDK
//
//  Created by 火星人 on 2021/12/7.
//

#import "EPGameExtraData.h"
#import "EPPayData.h"
#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

/// <#Description#>
@interface EP_NetWorking : NSObject

/// 发送验证码
/// @param phone 手机号码
/// @param block 返回数据blcok
+ (void)sendSms:(NSString *)phone FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 授权登录
/// @param loginExtension  登录扩展参数
/// @param loginOauthType 登录类型
/// @param block 返回数据blcok
+ (void)loginOAuth:(NSDictionary *)loginExtension
    loginOauthType:(NSString *)loginOauthType
       FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

// Token登录
+ (void)loginToken:(NSString *)mobileToken
      mobileUserId:(NSString *)mobileUserId
       FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 初始化
/// @param ids
/// @param block 返回数据blcok
+ (void)initWithGameAppId:(NSString *)ids FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;
// 获取系统时间
+ (NSString *)getCstSync:(NSString *)time error:(NSError **)error;

/// 版本更新
/// @param ids <#ids description#>
/// @param block <#block description#>
+ (void)gameVersionUpdate:(NSString *)ids FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 查询防沉迷规则
/// @param orderPrice  订单金额
/// @param ruleType  上报规则(0下线,1上线,2支付限额)
/// @param block 返回数据blcok
+ (void)queryAntiAddiction:(NSString *)orderPrice
                  ruleType:(NSString *)ruleType
               FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 查询验证用户实名
/// @param orderPrice
/// @param block 返回数据blcok
+ (void)queryUserRealName:(NSString *)orderPrice FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 验证用户实名
/// @param idCard  身份证号码
/// @param realName 真实姓名
/// @param realNameType  实名认证类型(china,aliyun,anonymous)
/// @param block 返回数据blcok
+ (void)verifyUserRealName:(NSString *)idCard
                  realName:(NSString *)realName
              realNameType:(NSString *)realNameType
               FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 创建订单
/// @param payData EPPayData
/// @param block 返回数据blcok
+ (void)createOrder:(EPPayData *)payData FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

// 创建订阅订单
+ (void)createSubOrder:(EPPayData *)payData FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

+ (void)validateOrder:(NSString *)productID
                  orderID:(NSString *)orderID
       transactionReceipt:(NSString *)transactionReceipt
    transactionIdentifier:(NSString *)transactionIdentifier
              FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

// appStoreKit2CheckPay
+ (void)appStoreKit2CheckPay:(NSString *)productID
                     orderID:(NSString *)orderID
               transactionId:(NSString *)transactionId
                 FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 去第三方平台查询订单状态
/// @param orderID 订单id
/// @param block 返回数据blcok
+ (void)validateOrder:(NSString *)orderID FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

+ (void)submitGameData:(EPGameExtraData *)gameUserModel
                   uid:(NSString *)uid

           accessToken:(NSString *)accessToken
           FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 忘记密码
/// @param phone 手机号码
/// @param newPassword 新密码
/// @param verifyCode 验证码
/// @param block <#block description#>
+ (void)forgetPassword:(NSString *)phone
           newPassword:(NSString *)newPassword
            verifyCode:(NSString *)verifyCode
           FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 用户信息修改
/// @param updateStr 修改信息
/// @param updateKey 修改信息key
/// @param verifyCode 验证码
/// @param block <#block description#>
+ (void)updateUserInfo:(NSString *)updateStr
             updateKey:(NSString *)updateKey
            verifyCode:(NSString *)verifyCode
           FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 用户信息
/// @param updateStr <#updateStr description#>
/// @param block <#block description#>
+ (void)getUserInfo:(NSString *)updateStr FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 获取用户订单
/// @param updateStr <#updateStr description#>
/// @param block <#block description#>
+ (void)getUserOrders:(NSString *)updateStr FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 发送短信验证码
/// @param phone 手机号码
/// @param block <#block description#>
+ (void)sendSmsVerifyCode:(NSString *)phone FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 注销用户账号
/// @param verifyCode 验证码
/// @param phone 手机号码
/// @param block <#block description#>
+ (void)cancelUserAccount:(NSString *)verifyCode
                    phone:(NSString *)phone
              FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 用户登出
/// @param Uids <#Uids description#>
/// @param block <#block description#>
+ (void)epsdkloginLogout:(NSString *)Uids FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 获取礼包
/// @param gift <#gift description#>
/// @param block <#block description#>
+ (void)giftBagList:(NSString *)gift FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 领取礼包
/// @param gift <#gift description#>
/// @param block <#block description#>
+ (void)receiveGiftBag:(NSString *)gift FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 我的礼包
/// @param gift <#gift description#>
/// @param block <#block description#>
+ (void)userGiftBagList:(NSString *)gift FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 获取平台币商品列表
/// @param gift <#gift description#>
/// @param block <#block description#>
+ (void)getPlatformProductList:(NSString *)gift FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 获取用户订单列表
/// @param gift <#gift description#>
/// @param block <#block description#>
+ (void)getUserOrderList:(NSString *)gift FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 获取用户订阅列表
///  @param gift <#gift description#>
///  @param block <#block description#>
+ (void)getUserSubsList:(NSString *)gift FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

/// 常见问题
/// @param faq <#gift description#>
/// @param block <#block description#>
+ (void)customerserviceFaq:(NSString *)faq FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

// 消息通知
+ (void)messageNoticeList:(NSString *)message FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;

// 联系我们
+ (void)usercenterAboutUs:(NSString *)us FinishBlock:(void (^)(NSDictionary *returnDic, NSError *error))block;
@end

NS_ASSUME_NONNULL_END
