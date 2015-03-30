//
//  DetailViewController.h
//  podsText
//
//  Created by Miri Vecselboim on 3/30/15.
//  Copyright (c) 2015 Miri Vecselboim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

