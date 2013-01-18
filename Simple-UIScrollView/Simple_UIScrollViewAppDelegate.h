//
//  Simple_UIScrollViewAppDelegate.h
//  Simple-UIScrollView
//
//  Created by Tim Chaplin on 5/21/11.
//  Copyright 2011 Tick Tock Development. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Simple_UIScrollViewViewController;

@interface Simple_UIScrollViewAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Simple_UIScrollViewViewController *viewController;

@end
