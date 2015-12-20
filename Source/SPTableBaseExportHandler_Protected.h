//
//  SPTableBaseExportHandler_Protected.h
//  sequel-pro
//
//  Created by Max Lohrmann on 29.11.15.
//  Copyright (c) 2015 Max Lohrmann. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//
//  More info at <https://github.com/sequelpro/sequelpro>

#import "SPTableBaseExportHandler.h"
#import "SPBaseExportHandler_Protected.h"

@interface SPTableBaseExportHandler ()

@property(readwrite, nonatomic, copy) NSArray *tableColumns;

/**
 * You should override this method and implement the logic that does
 * check and setCanBeImported: here.
 */
- (void)updateCanBeImported;

/**
 * You should override this method and implement the logic that does
 * check and setIsValidForExport: here.
 */
- (void)updateValidForExport;

/**
 * This will set the addonData of obj to a NSMutableDictionary if not set already
 */
+ (void)ensureAddonDict:(id<SPExportSchemaObject>)obj;

@end
