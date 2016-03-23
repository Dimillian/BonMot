//
//  NSAttributedString+BonMotUtilities.h
//  BonMot
//
//  Created by Eliot Williams on 3/9/16.
//
//

#import <Foundation/Foundation.h>
#import "BONCompatibility.h"

BON_ASSUME_NONNULL_BEGIN

@interface NSAttributedString (BonMotUtilities)

@property (copy, nonatomic, readonly) NSString *bon_humanReadableString;

- (NSString *)bon_humanReadableStringIncludingImageSize:(BOOL)shouldIncludeImageSize;

@end

BON_ASSUME_NONNULL_END
