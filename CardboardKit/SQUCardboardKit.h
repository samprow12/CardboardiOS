//
//  SQUCardboardKit.h
//  Cardboard
//
//  Created by Tristan Seifert on 1/17/15.
//  Copyright (c) 2015 Tristan Seifert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface SQUCardboardKit : NSObject <CLLocationManagerDelegate> {
	
}

+ (instancetype) sharedInstance;

- (void) requestPermissions;

@end
