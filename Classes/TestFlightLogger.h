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
// Cocoa Lumberjack
//#import "DDLog.h"
// TestFlight Logging API (expected in External/TestFlight/TestFlight.h)
#import "TestFlight.h"

#if PRAGMA_ONCE
#pragma once
#endif

@interface TestFlightLogger : DDAbstractLogger <DDLogger> {
    
}
@end
#endif
