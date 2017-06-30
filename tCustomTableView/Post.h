//
//  Post.h
//  tCustomTableView
//
//  Created by Caio Sanchez Christino on 30/06/17.
//  Copyright © 2017 Caio Sanchez Christino. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Post : NSObject
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *id;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *body;

+ (Post *) withNSDictionary: (NSDictionary *) dic;
@end
