//
//  PublicHeader.h
//  ClinchKit
//
//  Created by Damien Glancy on 21/03/2015.
//  Copyright (c) 2015 Clinch, Ltd. All rights reserved.
//

typedef void (^CKSuccessBlock)(id dictionary, id objects, NSURLSessionDataTask *task);
typedef void (^CKFailureBlock)(NSError *error, NSURLSessionDataTask *task);
typedef void (^CKAlwaysBlock)();

@interface ClinchKit : NSObject

#pragma mark - Configuration

+ (void)setBaseUrl:(NSString *)url;
+ (void)setApiKey:(NSString *)key;
+ (void)setApiSecret:(NSString *)secret;
+ (void)setAppGroupIdentifier:(NSString *)appGroupIdentifier;
+ (void)setKeychainAccessGroup:(NSString *)accessGroup;
+ (void)enableLogging;
+ (void)enableBeaconSupport;

#pragma mark - API

+ (void)checkCredentialsWithEmail:(NSString *)email password:(NSString *)password success:(CKSuccessBlock)success failure:(CKFailureBlock)failure always:(CKAlwaysBlock)always;
//+ (void)getMeWithSuccess:(CKSuccessBlock)success failure:(CKFailureBlock)failure always:(CKAlwaysBlock)always;

@end