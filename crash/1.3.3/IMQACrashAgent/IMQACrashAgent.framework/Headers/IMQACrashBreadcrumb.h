//
//  IMQACrashBreadcrumb.h
//
//  Created by Delisa Mason on 9/16/15.
//
//  Copyright (c) 2015 Bugsnag, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall remain in place
// in this source code.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
#import <Foundation/Foundation.h>

#ifndef NS_DESIGNATED_INITIALIZER
#if __has_attribute(objc_designated_initializer)
#define NS_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
#else
#define NS_DESIGNATED_INITIALIZER
#endif
#endif

typedef NS_ENUM(NSUInteger, IMQABreadcrumbType) {
    /**
     *  Any breadcrumb sent via IMQACrash.leaveBreadcrumb()
     */
    IMQABreadcrumbTypeManual,
    /**
     *  A call to IMQACrash.notify() (internal use only)
     */
    IMQABreadcrumbTypeError,
    /**
     *  A log message
     */
    IMQABreadcrumbTypeLog,
    /**
     *  A navigation action, such as pushing a view controller or dismissing an
     *  alert
     */
    IMQABreadcrumbTypeNavigation,
    /**
     *  A background process, such performing a database query
     */
    IMQABreadcrumbTypeProcess,
    /**
     *  A network request
     */
    IMQABreadcrumbTypeRequest,
    /**
     *  Change in application or view state
     */
    IMQABreadcrumbTypeState,
    /**
     *  A user event, such as authentication or control events
     */
    IMQABreadcrumbTypeUser,
};

@class IMQACrashBreadcrumb;

typedef void (^IMQABreadcrumbConfiguration)(IMQACrashBreadcrumb *_Nonnull);

@interface IMQACrashBreadcrumb : NSObject

@property(readonly, nullable) NSDate *timestamp;
@property(readwrite) IMQABreadcrumbType type;
@property(readwrite, copy, nonnull) NSString *name;
@property(readwrite, copy, nonnull) NSDictionary *metadata;

+ (instancetype _Nullable)breadcrumbWithBlock:
    (IMQABreadcrumbConfiguration _Nonnull)block;

@end

@interface IMQACrashBreadcrumbs : NSObject

/**
 * The maximum number of breadcrumbs. Resizable.
 */
@property(assign, readwrite) NSUInteger capacity;

/** Number of breadcrumbs accumulated */
@property(assign, readonly) NSUInteger count;

/**
 * Store a new breadcrumb with a provided message.
 */
- (void)addBreadcrumb:(NSString *_Nonnull)breadcrumbMessage;

/**
 *  Store a new breadcrumb configured via block.
 *
 *  @param block configuration block
 */
- (void)addBreadcrumbWithBlock:
    (void (^_Nonnull)(IMQACrashBreadcrumb *_Nonnull))block;

/**
 * Clear all stored breadcrumbs.
 */
- (void)clearBreadcrumbs;

/** Breadcrumb object for a particular index or nil */
- (IMQACrashBreadcrumb *_Nullable)objectAtIndexedSubscript:(NSUInteger)index;

/**
 * Serializable array representation of breadcrumbs, represented as nested
 * strings in the format:
 * [[timestamp,message]...]
 *
 * returns nil if empty
 */
- (NSArray *_Nullable)arrayValue;

@end
