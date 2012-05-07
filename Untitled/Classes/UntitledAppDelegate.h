//
//  UntitledAppDelegate.h
//  Untitled
//
//  Created by Haolun Chai on 12-05-07.
//  Copyright 2012 University of Waterloo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MainViewController;

@interface UntitledAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MainViewController *mainViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MainViewController *mainViewController;

@end

