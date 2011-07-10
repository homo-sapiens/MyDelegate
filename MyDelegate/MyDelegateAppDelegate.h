//
//  MyDelegateAppDelegate.h
//  MyDelegate
//
//  Created by Alximik on 10.07.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MyDelegateViewController;

@interface MyDelegateAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MyDelegateViewController *viewController;

@end
