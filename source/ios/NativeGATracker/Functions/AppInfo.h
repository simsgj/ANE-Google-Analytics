/**
 * Project: ANE-Google-Analytics
 *
 * Author:  Alessandro Bianco
 * Website: http://alessandrobianco.eu
 * Twitter: @alebianco
 * Created: 27/12/12 14:22
 *
 * Copyright © 2013 Alessandro Bianco
 */

#import <Foundation/Foundation.h>
#import "FREConversionUtil.h"
#import "FREUtils.h"
#import "GAI.h"
#import "GAIFields.h"

@interface AppInfo : NSObject

DEFINE_ANE_FUNCTION(setAppID);
DEFINE_ANE_FUNCTION(getAppID);
DEFINE_ANE_FUNCTION(getAppName);
DEFINE_ANE_FUNCTION(setAppName);
DEFINE_ANE_FUNCTION(getAppVersion);
DEFINE_ANE_FUNCTION(setAppVersion);
DEFINE_ANE_FUNCTION(getClientID);
DEFINE_ANE_FUNCTION(setClientID);

@end