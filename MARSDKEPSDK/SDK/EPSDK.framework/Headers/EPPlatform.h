//
//  EPPlatform.h
//  EPSDK
//
//  Created by 火星人 on 2021/12/7.
//
#import "EPGameExtraData.h"
#import "EPPayData.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// #define [EPPlatform sharedInstance] [EPPlatform sharedInstance]
typedef void (^SubscriptionResultHandler)(NSArray<NSString *> *products);

// ESDK相关回调接口， 游戏层在初始化的时候， 传入该delegate
@protocol EPPlatformDelegate <NSObject>

- (void)OnInitSuccess;
- (void)OnInitFailed:(NSString *)msg;
- (void)OnLoginSuccess:(NSDictionary *)result;
- (void)OnLoginFailed:(NSString *)msg;
- (void)OnLogoutSuccess;
- (void)OnLogoutFailed:(NSString *)msg;
- (void)OnPaySuccess:(NSDictionary *)msg;
- (void)OnPayFailed:(NSDictionary *)msg;
@end

typedef NS_ENUM(NSInteger, ESDKStateCode) { ES_NONE = 1, ES_INITING, ES_INITED, ES_LOGINING, ES_LOGINED };

@interface EPPlatform : NSObject

@property id<EPPlatformDelegate> delegate;

+ (EPPlatform *)sharedInstance;

- (void)showHint:(NSString *)msg;
- (void)initWithGameAppId:(NSString *)appId subMasterId:(NSString *)masterId delegate:(id<EPPlatformDelegate>)delegate;

- (void)login:(UIViewController *)viewController;

- (void)logout;
// 是否登录
- (BOOL)isLogin;
- (void)submitGameData:(EPGameExtraData *)data;

- (void)pay:(EPPayData *)data viewController:(UIViewController *)viewController;

- (void)loginForPay:(EPPayData *)data viewController:(UIViewController *)viewController;

- (void)startRealName:(BOOL)force block:(void (^)(BOOL isRealName, int age))block;

- (void)queryRealNameInfo:(void (^)(BOOL isRealName, int age))block;

- (void)applicationDidBecomeActive:(UIApplication *)application;

- (void)applicationWillResignActive:(UIApplication *)application;

- (BOOL)applicationEp:(UIApplication *)app
            openURL:(NSURL *)url
            options:(NSDictionary<NSString *, id> *)options;

- (BOOL)applicationEp:(UIApplication *)application
              openURL:(NSURL *)url
    sourceApplication:(NSString *)sourceApplication
           annotation:(id)annotation;

- (void)resumptionPurchases:(NSString *)productID;

- (void)showHud;

- (void)hideHud;
// mar 登录成功检查是否有丢单
- (void)checkUnFinishedOrders;

// 获取已经订阅
- (void)fetchSubscriptionsWithCompletion:(SubscriptionResultHandler)completion;

//-(void)Refundsub;
// 获取游戏类型
- (int)getGameType;

// 获取服务器时间戳(百度时间，没有网络返回0， 有网返回毫秒级时间戳 )
- (NSInteger)getInternetDate;
@end
