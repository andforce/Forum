//
// Created by 迪远 王 on 2018/5/1.
// Copyright (c) 2018 andforce. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ViewForumPage;

@protocol DiscuzParserDelegate <NSObject>

- (ViewForumPage *)parsePrivateMessageFromHtml:(NSString *)html;

- (ViewForumPage *)parseNoticeMessageFromHtml:(NSString *)html;

@end