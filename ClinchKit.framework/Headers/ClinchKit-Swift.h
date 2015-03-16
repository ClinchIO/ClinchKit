// Generated by Swift version 1.1 (swift-600.0.57.4)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import CoreData;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSDate;
@class NSDictionary;
@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS("BaseEntity")
@interface BaseEntity : NSManagedObject
@property (nonatomic, copy) NSString * uid;
@property (nonatomic) NSDate * createdAt;
@property (nonatomic) NSDate * updatedAt;
@property (nonatomic, readonly, copy) NSString * friendlyCreatedAt;
@property (nonatomic, readonly, copy) NSString * friendlyUpdatedAt;
- (void)setTimestamps:(NSDictionary *)dictionary;
- (instancetype)initWithEntity:(NSEntityDescription *)entity insertIntoManagedObjectContext:(NSManagedObjectContext *)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSSet;
@class SocialProfile;

SWIFT_CLASS("Candidate")
@interface Candidate : BaseEntity
@property (nonatomic, copy) NSString * firstName;
@property (nonatomic, copy) NSString * lastName;
@property (nonatomic, copy) NSString * name;
@property (nonatomic, copy) NSString * email;
@property (nonatomic, copy) NSString * phoneNumber;
@property (nonatomic, copy) NSString * avatarUrl;
@property (nonatomic) NSSet * candidateApplications;
@property (nonatomic) SocialProfile * socialProfile;
- (instancetype)initWithEntity:(NSEntityDescription *)entity insertIntoManagedObjectContext:(NSManagedObjectContext *)context OBJC_DESIGNATED_INITIALIZER;
@end

@class Job;
@class CandidateCommunicationAttachment;
@class CandidateCommunication;

SWIFT_CLASS("CandidateApplication")
@interface CandidateApplication : BaseEntity
@property (nonatomic) Job * job;
@property (nonatomic) Candidate * candidate;
@property (nonatomic, copy) NSString * jobTitle;
@property (nonatomic) NSSet * communications;
@property (nonatomic, readonly, copy) NSArray * attachments;
- (void)addCandidateCommunicationObject:(CandidateCommunication *)value;
- (instancetype)initWithEntity:(NSEntityDescription *)entity insertIntoManagedObjectContext:(NSManagedObjectContext *)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("CandidateCommunication")
@interface CandidateCommunication : BaseEntity
@property (nonatomic, copy) NSString * textValue;
@property (nonatomic) CandidateApplication * application;
@property (nonatomic) NSSet * attachments;
- (instancetype)initWithEntity:(NSEntityDescription *)entity insertIntoManagedObjectContext:(NSManagedObjectContext *)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("CandidateCommunicationAttachment")
@interface CandidateCommunicationAttachment : BaseEntity
@property (nonatomic, copy) NSString * downloadUrl;
@property (nonatomic, copy) NSString * previewUrl;
@property (nonatomic, copy) NSString * fileName;
@property (nonatomic, copy) NSString * contentType;
@property (nonatomic) CandidateCommunication * communication;
- (instancetype)initWithEntity:(NSEntityDescription *)entity insertIntoManagedObjectContext:(NSManagedObjectContext *)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSHTTPURLResponse;

SWIFT_PROTOCOL("_TtP9ClinchKit17ClinchKitDelegate_")
@protocol ClinchKitDelegate
@optional
- (void)networkErrorResponseCodeReceived:(NSInteger)code response:(NSHTTPURLResponse *)response;
- (void)networkActivityDidStart;
- (void)networkActivityDidFinish;
@end


SWIFT_CLASS("Job")
@interface Job : BaseEntity
@property (nonatomic, copy) NSString * title;
@property (nonatomic) NSSet * candidateApplications;
- (instancetype)initWithEntity:(NSEntityDescription *)entity insertIntoManagedObjectContext:(NSManagedObjectContext *)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSData (SWIFT_EXTENSION(ClinchKit))
@end


@interface NSDate (SWIFT_EXTENSION(ClinchKit))
@end


@interface NSHTTPURLResponse (SWIFT_EXTENSION(ClinchKit))
- (BOOL)successfulStatusCode;
@end


@interface NSMutableData (SWIFT_EXTENSION(ClinchKit))
@end


@interface NSMutableURLRequest (SWIFT_EXTENSION(ClinchKit))
@end


@interface NSURL (SWIFT_EXTENSION(ClinchKit))
@property (nonatomic, readonly, copy) NSString * URLString;
@end


@interface NSURLComponents (SWIFT_EXTENSION(ClinchKit))
@property (nonatomic, readonly, copy) NSString * URLString;
@end


@interface NSURLRequest (SWIFT_EXTENSION(ClinchKit))
@property (nonatomic, readonly) NSURLRequest * URLRequest;
@end


@interface NSURLRequest (SWIFT_EXTENSION(ClinchKit))
@property (nonatomic, readonly, copy) NSString * URLString;
@end


SWIFT_CLASS("SocialProfile")
@interface SocialProfile : BaseEntity
@property (nonatomic, copy) NSString * atTwitterUsername;
@property (nonatomic, copy) NSString * twitterUsername;
@property (nonatomic, copy) NSString * twitterUrl;
@property (nonatomic, copy) NSString * linkedInUsername;
@property (nonatomic, copy) NSString * linkedInUrl;
@property (nonatomic) Candidate * candidate;
- (instancetype)initWithEntity:(NSEntityDescription *)entity insertIntoManagedObjectContext:(NSManagedObjectContext *)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("User")
@interface User : BaseEntity
@property (nonatomic, copy) NSString * firstName;
@property (nonatomic, copy) NSString * lastName;
@property (nonatomic, copy) NSString * name;
@property (nonatomic, copy) NSString * email;
@property (nonatomic, copy) NSString * avatarUrl;
- (instancetype)initWithEntity:(NSEntityDescription *)entity insertIntoManagedObjectContext:(NSManagedObjectContext *)context OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
