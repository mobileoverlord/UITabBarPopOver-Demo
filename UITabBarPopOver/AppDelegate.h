//
//  AppDelegate.h
//  UITabBarPopOver
//
//  Created by Justin Schneck on 1/31/12.
//  Copyright (c) 2012 Mobile Overlord. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate,UITabBarDelegate> {
    UIPopoverController *popover;
}

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UITabBarController *tabBarController;

@end
