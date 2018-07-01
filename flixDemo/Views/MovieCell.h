//
//  MovieCell.h
//  flixDemo
//
//  Created by Gisele Phalo on 6/29/18.
//  Copyright © 2018 Gisele Phalo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;

@end
