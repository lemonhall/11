//
//  AppDelegate.h
//  11
//
//  Created by lemonhall on 14-1-4.
//  Copyright (c) 2014年 lemonhall. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (retain) id dataModel;

- (IBAction)saveAction:(id)sender;

@end
