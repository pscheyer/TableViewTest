//
//  TableViewController.m
//  TableViewTest
//
//  Created by Peter Scheyer on 5/6/15.
//  Copyright (c) 2015 Peter Scheyer. All rights reserved.
//

#import "TableViewController.h"

@implementation TableViewController

-(id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if(self) {
        self.images = [NSMutableArray array];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    for (int i = 1; i <= 10; i++) {
        NSString *imageName = [NSString stringWithFormat:@"%d.jpg", i];
        UIImage *image = [UIImage imageNamed:imageName];
        if(image) {
            [self.images addObject:image];
        }
    }
}

@end
