//
//  DetailViewController.h
//  nav
//
//  Created by yutaka on 2014/09/05.
//  Copyright (c) 2014年 yutaka. All rights reserved.
//

#import "ViewController.h"

@interface DetailViewController : ViewController
@property (weak, nonatomic) IBOutlet UIWebView *firstWebView;
- (IBAction)showActionSheet:(id)sender;
@property NSString *receiveUrl;
@end
