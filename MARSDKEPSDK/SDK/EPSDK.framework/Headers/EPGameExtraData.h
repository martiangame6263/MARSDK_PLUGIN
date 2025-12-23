//
//  EPGameExtraData.h
//  EPSDK
//
//  Created by 火星人 on 2021/12/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, GameDataModelOPType) { EOP_CREATE_ROLE = 1, EOP_ENTER_GAME, EOP_LEVEL_UP, EOP_EXIT };

@interface EPGameExtraData : NSObject

@property (nonatomic, assign) int opType;
@property (nonatomic, strong) NSString *serverID;
@property (nonatomic, strong) NSString *serverName;
@property (nonatomic, strong) NSString *roleID;
@property (nonatomic, strong) NSString *roleName;
@property (nonatomic, strong) NSString *roleLevel;
@property (nonatomic, strong) NSString *vip;

@end

NS_ASSUME_NONNULL_END
