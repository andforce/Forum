//
//  ForumHtmlParser.h
//
//  Created by 迪远 王 on 16/10/2.
//  Copyright © 2016年 andforce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "vBulletinForumEngine.h"

@interface ForumHtmlParser : NSObject <ForumParser>

- (instancetype) initWithForumHost:(NSString *)host;

@end
