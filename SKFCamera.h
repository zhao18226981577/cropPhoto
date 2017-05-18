/*!
 //  Created by 精智 on 17/3/29.
 //  Copyright © 2017年 精智. All rights reserved.
 */
#import <UIKit/UIKit.h>
typedef void (^fininshcapture)(UIImage
*image);
@interface SKFCamera : UIViewController
@property (nonatomic,copy) fininshcapture fininshcapture;

@end
