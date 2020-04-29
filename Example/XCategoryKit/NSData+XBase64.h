//
//  NSData+XBase64.h
//  XCategoryKit_Example
//
//  Created by WenQiangXu on 2020/4/29.
//  Copyright © 2020 o-xuxiaowen-o. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (XBase64)

/**
 *  @brief 字符串base64后转data
 *  @param string 传入字符串
 *  @return 传入的字符串转base64后的data
 */
+ (NSData *)x_dataWithBase64EncodedString:(NSString *)string;
/**
 *  @brief NSData转base64string
 *  @param wrapWidth 换行长度  76  64
 *  @return base64后的字符串
 */
- (NSString *)x_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;
/**
 *  @brief NSData转base64string 换行长度默认64
 *  @return base64后的字符串
 */
- (NSString *)x_base64EncodedString;

@end

NS_ASSUME_NONNULL_END
