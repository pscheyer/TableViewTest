//
//  DataSource.h
//  TableViewTest
//
//  Created by Peter Scheyer on 5/6/15.
//  Copyright (c) 2015 Peter Scheyer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
