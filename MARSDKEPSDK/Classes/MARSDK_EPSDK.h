//
//  MARSDK_EPSDK.h
//  MARSDK_EPSDK
//
//  Created by js wu on 2021/7/5.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

#import <MARSDKCore/MARPay.h>
#import <MARSDKCore/MARPlugin.h>
#import <MARSDKCore/MARSDK.h>
#import <MARSDKCore/MARUser.h>

@interface MARSDK_EPSDK : MARPlugin <IMARUser, IMARPay>

@end
