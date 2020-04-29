//
//  NSString+XBase64.m
//  XCategoryKit_Example
//
//  Created by WenQiangXu on 2020/4/29.
//  Copyright © 2020 972510000@qq.com. All rights reserved.
//

#import "NSString+XBase64.h"
#import "NSData+XBase64.h"

@implementation NSString (XBase64)

+ (NSString *)x_stringWithBase64EncodedString:(NSString *)string {
  NSData *data = [NSData x_dataWithBase64EncodedString:string];
  if (data) {
    return [[self alloc] initWithData:data encoding:NSUTF8StringEncoding];
  }
  return nil;
}

- (NSString *)x_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth {
  NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding allowLossyConversion:YES];
  return [data x_base64EncodedStringWithWrapWidth:wrapWidth];
}

- (NSString *)x_base64EncodedString {
  NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding allowLossyConversion:YES];
  return [data x_base64EncodedString];
}

- (NSString *)x_base64DecodedString {
  return [NSString x_stringWithBase64EncodedString:self];
}

- (NSData *)x_base64DecodedData {
  return [NSData x_dataWithBase64EncodedString:self];
}

@end
