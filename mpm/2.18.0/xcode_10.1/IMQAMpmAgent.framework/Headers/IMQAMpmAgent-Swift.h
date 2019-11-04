// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="IMQAMpmAgent",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif





@class NSRunLoop;

SWIFT_CLASS("_TtC12IMQAMpmAgent12FrameCounter")
@interface FrameCounter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) NSTimeInterval notificationDelay;
- (void)startTrackingInRunLoop:(NSRunLoop * _Nonnull)runloop mode:(NSRunLoopMode _Nonnull)mode;
- (void)stopTracking;
@end


SWIFT_CLASS("_TtC12IMQAMpmAgent12FrameMonitor")
@interface FrameMonitor : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@class NSString;

SWIFT_CLASS("_TtC12IMQAMpmAgent9HTTPModel")
@interface HTTPModel : NSObject
@property (nonatomic) NSInteger dateKey;
@property (nonatomic, copy) NSString * _Nullable requestURL;
@property (nonatomic, copy) NSString * _Nullable requestMethod;
@property (nonatomic, copy) NSString * _Nullable requestCachePolicy;
@property (nonatomic, copy) NSString * _Nullable requestDate;
@property (nonatomic, copy) NSString * _Nullable requestTime;
@property (nonatomic, copy) NSString * _Nullable requestTimeout;
@property (nonatomic, copy) NSDictionary * _Nullable requestHeaders;
@property (nonatomic, copy) NSString * _Nullable requestType;
@property (nonatomic, copy) NSString * _Nullable responseType;
@property (nonatomic, copy) NSString * _Nullable responseDate;
@property (nonatomic, copy) NSString * _Nullable responseTime;
@property (nonatomic, copy) NSDictionary * _Nullable responseHeaders;
@property (nonatomic, strong) NSString * _Nullable randomHash;
@property (nonatomic, strong) NSString * _Nonnull shortType;
@property (nonatomic) BOOL noResponse;
- (NSString * _Nullable)getTimeFromDate:(NSDate * _Nonnull)date SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isSuccessful SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)formattedRequestLogEntry SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)formattedResponseLogEntry SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12IMQAMpmAgent10IMQAConfig")
@interface IMQAConfig : NSObject
@property (nonatomic, copy) NSString * _Nonnull project_key;
@property (nonatomic) NSInteger dump_interval;
@property (nonatomic) NSInteger launch_time;
@property (nonatomic, copy) NSString * _Nonnull dev_langauge;
@property (nonatomic, copy) NSString * _Nonnull prefix;
@property (nonatomic) NSInteger save_interval;
@property (nonatomic, copy) NSString * _Nonnull api_url;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull ignoreUrl;
@property (nonatomic) BOOL useNetworkCollect;
@property (nonatomic) BOOL downloadDumpData;
- (nonnull instancetype)init:(NSString * _Nonnull)project_key OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class UIViewController;

SWIFT_CLASS("_TtC12IMQAMpmAgent12IMQAMpmAgent")
@interface IMQAMpmAgent : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) IMQAMpmAgent * _Nonnull sharedInstance;)
+ (IMQAMpmAgent * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)runWithConfig:(IMQAConfig * _Nonnull)config;
- (void)saveWebviewPostMessage:(UIViewController * _Nonnull)vc :(NSString * _Nonnull)message;
- (void)swizzleStarting;
- (void)initUserDefaults:(IMQAConfig * _Nonnull)config SWIFT_METHOD_FAMILY(none);
- (void)monitoring;
- (void)saveBehavior:(IMQAConfig * _Nonnull)config;
- (void)saveDumpJSON:(IMQAConfig * _Nonnull)config;
@end




SWIFT_CLASS("_TtC12IMQAMpmAgent16NetworkCollector")
@interface NetworkCollector : NSObject
+ (NetworkCollector * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (void)start;
- (void)stop;
- (void)ignoreURL:(NSString * _Nonnull)url;
- (void)setCachePolicy:(enum NSURLCacheStoragePolicy)policy;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSessionTask;
@class NSCachedURLResponse;
@protocol NSURLProtocolClient;

SWIFT_CLASS("_TtC12IMQAMpmAgent15NetworkProtocol")
@interface NetworkProtocol : NSURLProtocol
+ (BOOL)canInitWithRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canInitWithTask:(NSURLSessionTask * _Nonnull)task SWIFT_WARN_UNUSED_RESULT;
- (void)startLoading;
- (void)stopLoading;
+ (NSURLRequest * _Nonnull)canonicalRequestForRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithRequest:(NSURLRequest * _Nonnull)request cachedResponse:(NSCachedURLResponse * _Nullable)cachedResponse client:(id <NSURLProtocolClient> _Nullable)client OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12IMQAMpmAgent18ThreadTraceMonitor")
@interface ThreadTraceMonitor : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIViewController (SWIFT_EXTENSION(IMQAMpmAgent))
- (void)imqaViewWillAppear:(BOOL)animated;
- (void)imqaViewDidAppear:(BOOL)animated;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
