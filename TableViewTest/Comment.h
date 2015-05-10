//
//  Comment.h
//  TableViewTest
//
//  Created by Peter Scheyer on 5/6/15.
//  Copyright (c) 2015 Peter Scheyer. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end