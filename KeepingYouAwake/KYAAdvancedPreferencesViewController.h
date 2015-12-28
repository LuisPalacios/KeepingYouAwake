//
//  KYAAdvancedPreferencesViewController.h
//  KeepingYouAwake
//
//  Created by Marcel Dierkes on 18.12.15.
//  Copyright © 2015 Marcel Dierkes. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface KYAAdvancedPreferencesViewController : NSViewController

/**
 *  Determines if the current Mac has a built-in battery.
 */
@property (nonatomic, readonly, getter=isBatteryStatusAvailable) BOOL batteryStatusAvailable;

/**
 *  A table view reference.
 */
@property (weak, nonatomic, nullable) IBOutlet NSTableView *tableView;

/**
 *  Resets all advanced preferences to their default value.
 *
 *  @param sender A sender.
 */
- (IBAction)resetAdvancedPreferences:(nullable id)sender;

@end
