//
//  ChatModel.h
//  InPutDemo
//
//  Created by gaozhichao on 16/5/27.
//  Copyright © 2016年 gaozhichao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChatModel : NSObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, strong) NSNumber *type;

@property (nonatomic, assign, getter = isHiddenTime) BOOL hiddenTime;

@end