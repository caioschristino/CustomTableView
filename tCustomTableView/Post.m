//
//  Post.m
//  tCustomTableView
//
//  Created by Caio Sanchez Christino on 30/06/17.
//  Copyright © 2017 Caio Sanchez Christino. All rights reserved.
//

#import "Post.h"

@implementation Post
@synthesize id, userId, title, body;

+ (Post *)withNSDictionary:(NSDictionary *)dic
{
    
    Post *post = [[Post alloc] init];
    [post setUserId: [dic objectForKey:@"userId"]];
    [post setId: [dic objectForKey:@"id"]];
    [post setTitle: [dic objectForKey:@"title"]];
    [post setBody: [dic objectForKey:@"body"]];
    
    return post;
}
@end
