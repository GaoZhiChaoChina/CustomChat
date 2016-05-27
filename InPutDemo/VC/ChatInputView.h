//
//  ChatInputView.h
//  InPutDemo
//
//  Created by gaozhichao on 16/5/27.
//  Copyright © 2016年 gaozhichao. All rights reserved.
//


#import <UIKit/UIKit.h>
@class ChatInputView;

@protocol ChatInputViewDelegate <NSObject>
/**
 *  即将显示键盘时调用
 *
 *  @param inputView 当前输入框view
 *  @param height    键盘高度
 *  @param time      弹出时间
 */
- (void)inputView:(ChatInputView *)inputView willShowKeyboardHeight:(CGFloat)height time:(NSNumber *)time;
/**
 *  即将隐藏键盘时调用
 *
 *  @param inputView 当前输入框view
 *  @param time      弹出时间
 */
- (void)willHideKeyboardWithInputView:(ChatInputView *)inputView time:(NSNumber *)time;
/**
 *  点击return键时调用
 *
 *  @param inputView 当前输入框view
 *  @param text      输入的聊天内容(非空)
 */
- (void)inputView:(ChatInputView *)inputView text:(NSString *)text;

@end

@interface ChatInputView : UIImageView <UITextFieldDelegate>

@property (nonatomic, weak) id<ChatInputViewDelegate> delegate;
/**
 *  是否在输入状态
 */
- (BOOL)isEditing;
/**
 *  进入输入状态
 */
- (BOOL)becomeFirstResponder;
@end
