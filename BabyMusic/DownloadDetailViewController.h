//
//  DownloadDetailViewController.h
//  BabyMusic
//
//  Created by Tayoji on 15/6/22.
//  Copyright (c) 2015年 Tayoji. All rights reserved.
//

#import "BaseViewController.h"
#import "DataModel.h"
@interface DownloadDetailViewController : BaseViewController
@property(nonatomic,strong)MediaListModel * model;
@property(nonatomic)BOOL isDownloadViewController;
@end
