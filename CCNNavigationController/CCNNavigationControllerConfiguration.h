//
//  Created by Frank Gregor on 27/04/16.
//  Copyright © 2016 cocoa:naut. All rights reserved.
//

/*
 The MIT License (MIT)
 Copyright © 2016 Frank Gregor, <phranck@cocoanaut.com>
 http://cocoanaut.mit-license.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the “Software”), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#import <AppKit/AppKit.h>

typedef NS_ENUM(NSUInteger, CCNNavigationControllerTransition) {
    CCNNavigationControllerTransitionShiftLeft = 0,             // push from right to left
    CCNNavigationControllerTransitionShiftRight,                // push from left to right
    CCNNavigationControllerTransitionShiftDown,                 // push from top to bottom
    CCNNavigationControllerTransitionShiftUp                    // push from bottom to top
};

@interface CCNNavigationControllerConfiguration : NSObject

+ (instancetype)defaultConfiguration;

@property (nonatomic, strong) NSColor *backgroundColor;                                     // default: [NSColor windowBackgroundColor], this color will be injected to every pushed viewController
@property (nonatomic, assign) CCNNavigationControllerTransition transition;                 // default: CCNNavigationControllerTransitionShiftLeft
@property (assign, nonatomic) NSTimeInterval transitionDuration;                            // default: 0.35

@end
