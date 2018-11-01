/**
 * Copyright 2017 Kakao Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KCMAgent : NSObject

@property (readonly) NSString *sdk;
@property (readonly) NSString *os;
@property (readonly) NSString *lang;
@property (readonly) NSString *res;
@property (readonly) NSString *device;
@property (readonly) NSString *origin;
@property (readonly) NSString *appVer;

+ (instancetype)currentAgent;

- (NSString *)headerString;

@end

NS_ASSUME_NONNULL_END