//
//  NBDefines.h
//  NBClient
//
//  Created by Peng Wang on 7/10/14.
//  Copyright (c) 2014 NationBuilder. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const NBErrorDomain;
extern NSUInteger const NBErrorCodeInvalidArgument;

// Names for a dedicated NationBuilder Info.plist file, which is the suggested
// method for storing relevant configuration.
extern NSString * const NBInfoFileName;
extern NSString * const NBInfoBaseURLFormatKey;
extern NSString * const NBInfoClientIdentifierKey;
extern NSString * const NBInfoNationNameKey;
extern NSString * const NBInfoRedirectPathKey;
extern NSString * const NBInfoTestTokenKey;

// Storing the client secret is discouraged for apps not built by NationBuilder.
extern NSString * const NBInfoClientSecretKey;

// To use our icon font you must add 'pe-icon-7-stroke' to 'Fonts provided by
// application' in your Info.plist.
extern NSString * const NBIconFontFamilyName;

// Completion handlers are always called.
typedef void (^NBGenericCompletionHandler)(NSError *error);

// Class(file)-based log levels give you more control over what library log messages
// show up.
typedef NS_ENUM(NSUInteger, NBLogLevel) {
    NBLogLevelNone,
    NBLogLevelError,
    NBLogLevelWarning,
    NBLogLevelInfo,
    NBLogLevelDebug,
};
// But they only work for classes that implement this protocol and allow you to
// change the log level.
@protocol NBLogging <NSObject>

+ (void)updateLoggingToLevel:(NBLogLevel)logLevel;

@end

@protocol NBDictionarySerializing <NSObject>

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)dictionary;
- (BOOL)isEqualToDictionary:(NSDictionary *)dictionary;

@end