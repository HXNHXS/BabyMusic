//
//  MySqlite.h
//  BabyMusic
//
//  Created by Tayoji on 15/6/21.
//  Copyright (c) 2015年 Tayoji. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMDatabase.h"
#import "DataModel.h"
#import "MusicModel.h"
@interface MySqlite : NSObject
+(instancetype)sharaSqlite;
-(void)creatFMDB;
-(void)insertDataWithMediaListModel:(MediaListModel * )model;
-(void)insertDataWithMusicModel:(MusicModel * )model;
-(NSArray *)findMediaListModel;
-(NSArray *)findMusicModel;
-(void)deleteMediaListModel:(MediaListModel *)model;
-(void)deleteMusicModel:(MusicModel *)model;
- (void)updateMusicModel:(MusicModel *)model;
@end
