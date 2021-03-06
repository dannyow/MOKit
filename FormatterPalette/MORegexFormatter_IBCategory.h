// MORegexFormatter_IBCategory.h
// MOKit
// MOFormatterPalette
//
// Copyright © 1996-2005, Mike Ferris.  All rights reserved.
// See bottom of file for license and disclaimer.

// ABOUT MORegexFormatter_IBCategory
//
// MORegexFormatter_IBCategory has implementations of various methods used by IB for
// inspectors and such.

#if !defined(__MOFORMATTERPALETTE_MORegexFormatter_IBCategory__)
#define __MOFORMATTERPALETTE_MORegexFormatter_IBCategory__ 1

#import <Cocoa/Cocoa.h>
#import <MOKit/MOKit.h>

#if defined(__cplusplus)
extern "C" {
#endif
    
@interface MORegexFormatter(IBCategory)

- (NSString *)inspectorClassName;

@end

#if defined(__cplusplus)
}
#endif

#endif // __MOFORMATTERPALETTE_MORegexFormatter_IBCategory__


/*
 This file contains Original Code and/or Modifications of Original Code as defined in and that are subject to the Ferris Public Source License Version 1.2 (the 'License'). You may not use this file except in compliance with the License. Please obtain a copy of the License at http://mokit.sourceforge.net/License.html and read it before using this file.

 The Original Code and all software distributed under the License are distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, AND MIKE FERRIS HEREBY DISCLAIMS ALL SUCH WARRANTIES, INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT. Please see the License for the specific language governing rights and limitations under the License.
 */
