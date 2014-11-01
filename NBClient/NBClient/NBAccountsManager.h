//
//  NBAccountsManager.h
//  NBClient
//
//  Copyright (c) 2014 NationBuilder. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NBAccountsViewDefines.h"
#import "NBDefines.h"

#import "NBAccount.h"

@interface NBAccountsManager : NSObject <NBAccountsViewDataSource, NBAccountDelegate, NBLogging>

@property (nonatomic, weak, readonly) id<NBAccountsManagerDelegate> delegate;

- (instancetype)initWithClientInfo:(NSDictionary *)clientInfoOrNil
                          delegate:(id<NBAccountsManagerDelegate>)delegate;

@end