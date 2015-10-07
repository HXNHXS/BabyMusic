//
//  AlbumViewController.h
//  BabyMusic
//
//  Created by Tayoji on 15-6-13.
//  Copyright (c) 2015年 Tayoji. All rights reserved.
//

#import "BaseViewController.h"
#import "DataModel.h"
@interface AlbumViewController : BaseViewController
{
 BOOL _isReturn;
}
@property(nonatomic)NSInteger totalCount;
@property(nonatomic)BOOL isReturn;
@property(nonatomic)BOOL isRecord;
@property(nonatomic)BOOL isMusicList;
@property(nonatomic,strong)NSMutableArray * pushArr;

@property(nonatomic,strong)id  model;
@end
