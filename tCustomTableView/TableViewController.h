//
//  TableViewController.h
//  tCustomTableView
//
//  Created by Caio Sanchez Christino on 30/06/17.
//  Copyright © 2017 Caio Sanchez Christino. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomTableViewCell.h"
#import "Post.h"
@interface TableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
@property (strong, nonatomic) NSMutableArray *data;

@end
