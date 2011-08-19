//
//  AtomicityAppDelegate.h
//  Atomicity
//
//  Created by Chris Wanstrath on 8/18/11.
//  Copyright 2011 GitHub. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AtomicityAppDelegate : NSObject <NSApplicationDelegate> {
    IBOutlet id webView;
    NSWindow *window;
}

@property (assign) IBOutlet id webView;
@property (assign) IBOutlet NSWindow *window;

@end
