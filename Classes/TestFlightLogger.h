//
//  TestFlightLogger.h
//  TestFlightLogger
//
//  Created by Dan Zinngrabe on 1/21/11.
//  Copyright (c) 2011 quellish.org. All rights reserved.
//

#ifndef __TESTFLIGHTLOGGER_H__
#define __TESTFLIGHTLOGGER_H__

#import <Foundation/Foundation.h>
// Cocoa Lumberjack (Expected in External/CocoaLumberjack/Lumberjack/DDLog.h)
#import "DDLog.h"
// TestFlight Logging API (expected in External/TestFlight/TestFlight.h)
#import "TestFlight.h"

#if PRAGMA_ONCE
#pragma once
#endif

@interface TestFlightLogger : DDAbstractLogger <DDLogger> {
    
}

/*!
 
 Initialize the logger with the Team Token assigned for your TestFlight team.
 
 @see https://www.testflightapp.com/sdk
 @param String the TestFlight API Team Token for your Team.

 */

- (id)initWithTeamToken:(NSString *)teamToken;

@end
#endif
