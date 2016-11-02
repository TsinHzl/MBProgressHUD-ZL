//
//  MBProgressHUD+ZL.h
//  ZLPlayNews
//
//  Created by hezhonglin on 16/11/2.
//  Copyright © 2016年 TsinHzl. All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (ZL)

+ (void)zl_showSuccess:(NSString *)success toView:(UIView *)view;
+ (void)zl_showError:(NSString *)error toView:(UIView *)view;

+ (MBProgressHUD *)zl_showMessage:(NSString *)message toView:(UIView *)view;

+ (void)zl_showAlert:(NSString *)alert toView:(UIView *)view afterDelay:(NSTimeInterval)time;
+ (void)zl_showAlert:(NSString *)alert afterDelay:(NSTimeInterval)time;


+ (void)zl_showSuccess:(NSString *)success;
+ (void)zl_showError:(NSString *)error;

+ (MBProgressHUD *)zl_showMessage:(NSString *)message;

+ (void)zl_hideHUDForView:(UIView *)view;
+ (void)zl_hideHUD;

@end
