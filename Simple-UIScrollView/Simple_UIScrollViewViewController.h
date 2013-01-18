//
//  Simple_UIScrollViewViewController.h
//  Simple-UIScrollView
//
//  Created by Tim Chaplin on 5/21/11.
//  Copyright 2011 Tick Tock Development. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Simple_UIScrollViewViewController : UIViewController <UITextFieldDelegate,
UIPickerViewDelegate>  {
   UIDatePicker *datePicker; 
    UITextField *textField; 
}

@property (nonatomic, retain) IBOutlet UIDatePicker* datePicker;
@property (nonatomic, retain) IBOutlet UITextField* textField;

- (void)registerForKeyboardNotifications;

@end
