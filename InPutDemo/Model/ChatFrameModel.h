//
//  ChatFrameModel.h
//  InPutDemo
//
//  Created by gaozhichao on 16/5/27.
//  Copyright © 2016年 gaozhichao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ChatModel.h"

@interface ChatFrameModel : NSObject

@property (nonatomic, assign, readonly) CGRect titleLabelFrame;
@property (nonatomic, assign, readonly) CGRect contentBtnFrame;
@property (nonatomic, assign, readonly) CGRect iconImageViewFrame;
/**
 *  行高
 */
@property (nonatomic, assign) CGFloat cellHeight;

@property (nonatomic, strong) ChatModel *chatModel;

@end
