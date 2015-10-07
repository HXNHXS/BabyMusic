//
//  BadyTabBarViewController.h
//  babyMusic
//
//  Created by Tayoji on 15-6-11.
//  Copyright (c) 2015年 Tayoji. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AudioStreamer.h"
#import <AVFoundation/AVFoundation.h>

extern AVAudioPlayer * myPlayer;
extern  AudioStreamer * myStreamer;

@interface BadyTabBarViewController : UITabBarController

@property(nonatomic,strong)UIImageView * playView;
@property(nonatomic,strong)UIImageView * imageView;

@end
