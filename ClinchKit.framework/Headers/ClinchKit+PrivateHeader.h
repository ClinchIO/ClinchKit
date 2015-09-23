//
//  PrivateHeader.h
//  ClinchKit
//
//  Created by Damien Glancy on 21/03/2015.
//  Copyright (c) 2015 Clinch, Ltd. All rights reserved.
//

@interface ClinchKit (Private)

#pragma mark - Init

+ (ClinchKit *)instance;

#pragma mark - Configuration

+ (NSString *)baseUrl;
+ (NSString *)apiKey;
+ (NSString *)apiSecret;
+ (NSString *)appGroupIdentifier;
+ (NSString *)keychainAccessGroup;
+ (BOOL)isLoggingEnabled;
+ (BOOL)isBeaconSupportEnabled;
+ (void)setUserUid:(NSString *)uid;
+ (NSString *)userUid;

#pragma mark - Reset 

+ (void)reset;

@end