//
//  AppDelegate.h
//  Yelp ACA version
//
//  Created by Levon Gharibyan on 5/23/17.
//  Copyright © 2017 Levon Gharibyan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

