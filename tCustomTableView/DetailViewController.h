//
//  DetailViewController.h
//  tCustomTableView
//
//  Created by Caio Sanchez Christino on 30/06/17.
//  Copyright © 2017 Caio Sanchez Christino. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Post.h"
@interface DetailViewController : UIViewController
@property(nonatomic, strong) Post *post;
@property (weak, nonatomic) IBOutlet UILabel *uiLabelBody;

@end
