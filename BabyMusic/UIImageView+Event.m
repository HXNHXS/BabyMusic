//
//  UIImageView+Event.m
//  BabyMusic
//
//  Created by Tayoji on 15-6-13.
//  Copyright (c) 2015年 Tayoji. All rights reserved.
//

#import "UIImageView+Event.h"
#import <objc/runtime.h>
@interface UIImageView()
@property(nonatomic,copy)ImagViewEvent myBlock;
@end
@implementation UIImageView (Event)
-(void)addEvent:(ImagViewEvent)myBlock{
    self.userInteractionEnabled=YES;
    if (self.myBlock!=myBlock) {
        self.myBlock=myBlock;
    }
    
}
-(void)setMyBlock:(ImagViewEvent)myBlock{
    objc_setAssociatedObject(self, "myBlock", myBlock, OBJC_ASSOCIATION_COPY);

}
-(ImagViewEvent)myBlock{
    return objc_getAssociatedObject(self, "myBlock");
}
-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event{
    if ([self conformsToProtocol:@protocol(ImagViewTouchEndh)]) {
         self.myBlock(self);
    }
   
}
@end
