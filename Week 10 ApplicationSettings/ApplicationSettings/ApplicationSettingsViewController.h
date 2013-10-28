//
//  ApplicationSettingsViewController.h
//  ApplicationSettings
//
//  Created by Wei-Meng Lee on 3/8/11.
//  Copyright 2011 Marc A Myers All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ApplicationSettingsViewController : UIViewController 
<UIPickerViewDataSource, UIPickerViewDelegate> 
{
        IBOutlet UITextField *loginName;
        IBOutlet UITextField *password;
        IBOutlet UIPickerView *favoriteColor;
}

@property (nonatomic, retain) UITextField *loginName;
@property (nonatomic, retain) UITextField *password;
@property (nonatomic, retain) UIPickerView *favoriteColor;

-(IBAction) loadSettings: (id) sender;
-(IBAction) saveSettings: (id) sender;
-(IBAction) doneEditing: (id) sender;

@end
