//
//  ForumHtmlParser.m
//
//  Created by 迪远 王 on 16/10/2.
//  Copyright © 2016年 andforce. All rights reserved.
//

#import "ForumHtmlParser.h"
#import "CCFForumHtmlParser.h"


@implementation ForumHtmlParser

- (instancetype)initWithForumHost:(NSString *)host {
    self = [super init];
    if ([host isEqualToString:@"bbs.et8.net"]){
        return [[CCFForumHtmlParser alloc] init];
    }
    return self;
}

@end
