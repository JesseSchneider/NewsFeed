//
//  Post.h
//  RSS reader app
//
//  Created by Jesse Schneider on 12/6/14.
//  Copyright (c) 2014 EastoftheWestEnd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Post : NSObject

@property (nonatomic, strong)NSString *title;
@property (nonatomic, strong)NSString *post;
@property (nonatomic,strong)UIImage *postImage;
@property (nonatomic,strong)NSString *linkToSite;
@property (nonatomic,strong)NSString *cost;
- (instancetype) initWithDictionary:(NSDictionary *)postDictionary;


@end
