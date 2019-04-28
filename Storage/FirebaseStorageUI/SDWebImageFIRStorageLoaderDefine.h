//
//  Copyright (c) 2016 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <FirebaseStorage/FirebaseStorage.h>
#import <SDWebImage/SDWebImage.h>

/**
 * The scheme when identifing the URL is Firebase Storage URL
 */
FOUNDATION_EXPORT NSString * _Nonnull const FUIStorageScheme;

/**
 * A UInt64 raw value specify the maximum size of the downloaded image. If the downloaded image
 *   exceeds this size, an error will be raised in the completion block. (NSNumber *)
 */
FOUNDATION_EXPORT SDWebImageContextOption _Nonnull const FUIStorageMaxImageSize;

// `FIRStorageDownloadTask` conforms to `SDWebImageOperation` protocol
@interface FIRStorageDownloadTask (SDWebImage) <SDWebImageOperation>

@end
