//
//  AppDelegate.h
//  JenkinsMemo
//
//  Created by colourlife on 2018/2/12.
//  Copyright © 2018年 colourlife. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

