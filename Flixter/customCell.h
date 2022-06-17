//
//  customCell.h
//  Flixter
//
//  Created by Onwuosiuno Ikhioda on 6/17/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface customCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *info;
@property (weak, nonatomic) IBOutlet UILabel *title;
@property (weak, nonatomic) IBOutlet UIImageView *poster;

@end

NS_ASSUME_NONNULL_END
