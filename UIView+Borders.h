//
//  UIView+Borders.h
//
//  Created by Aaron Ng on 12/28/13.
//  Copyright (c) 2013 Delve. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Borders)

/* Create your borders and assign them to a property on a view when you can via the create methods when possible. Otherwise you might end up with multiple borders being created.
 */

///------------
/// Top Border
///------------
-(void)addTopBorderWithHeight:(CGFloat)height andColor:(UIColor*)color;

///------------
/// Right Border
///------------
-(void)addRightBorderWithWidth: (CGFloat)width andColor:(UIColor*)color;

///------------
/// Bottom Border
///------------
-(void)addBottomBorderWithHeight:(CGFloat)height andColor:(UIColor*)color;

///------------
/// Left Border
///------------
-(void)addLeftBorderWithWidth: (CGFloat)width andColor:(UIColor*)color;

@end
