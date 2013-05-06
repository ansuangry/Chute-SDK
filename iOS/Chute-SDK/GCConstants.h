//
//  GCConstants.h
//
//  Copyright 2011 Chute Corporation. All rights reserved.
//

//////////////////////////////////////////////////////////
//                                                      //
//                   VERSION 1.0.9                      //
//                                                      //
//////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////
// Set which service is to be used
// 0 - Facebook
// 1 - Evernote
// 2 - Chute
// 3 - Twitter
// 4 - Foursquare

#define kSERVICE 0

////////////////////////////////////////////////////////////////////////////////////////////////////////

#define kDEVICE_NAME        [[UIDevice currentDevice] name]
#define kDEVICE_OS          [[UIDevice currentDevice] systemName]
#define kDEVICE_VERSION     [[UIDevice currentDevice] systemVersion]

#warning Replace the following setting with your own client info

#define kOAuthCallbackURL               @"http://getchute.com/oauth/callback"
#define kOAuthCallbackRelativeURL       @"/oauth/callback"

#define kOAuthAppID                     @"YOUR_APP_ID"
#define kOAuthAppSecret                 @"YOUR_APP_SECRET"

#define kOAuthPermissions               @"all_resources manage_resources profile resources"

#define kOAuthTokenURL                  @"https://getchute.com/oauth/access_token"

#define API_URL                         @"https://api.getchute.com/v1/"
#define ACCOUNTS_API_URL                @"http://accounts.getchute.com/v1/"
#define SERVER_URL                      @"https://getchute.com"

////////////////////////////////////////////////////////////////////////////////////////////////////////
