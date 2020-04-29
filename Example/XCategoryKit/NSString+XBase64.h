//
//  NSString+XBase64.h
//  XCategoryKit_Example
//
//  Created by WenQiangXu on 2020/4/29.
//  Copyright © 2020 o-xuxiaowen-o. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (XBase64)

+ (NSString *)x_stringWithBase64EncodedString:(NSString *)string;
- (NSString *)x_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;
- (NSString *)x_base64EncodedString;
- (NSString *)x_base64DecodedString;
- (NSData *)x_base64DecodedData;

@end

NS_ASSUME_NONNULL_END
