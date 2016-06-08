//
//  UIImageView+LBBlurredImage.h
//  LBBlurredImage
//
//  Created by Luca Bernardi on 11/11/12.
//  Copyright (c) 2012 Luca Bernardi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^LBBlurredImageCompletionBlock)(NSError *error);

extern NSString *const kLBBlurredImageErrorDomain;

extern CGFloat const kLBBlurredImageDefaultBlurRadius;

enum LBBlurredImageError {
    LBBlurredImageErrorFilterNotAvailable = 0,
};


@interface UIImageView (LBBlurredImage)

/**
 Set the blurred version of the provided image to the UIImageView
 
 @param UIImage the image to blur and set as UIImageView's image
 @param CGFLoat the radius of the blur used by the Gaussian filter
 *param LBBlurredImageCompletionBlock a completion block called after the image
    was blurred and set to the UIImageView (the block is dispatched on main thread)
 */
- (void)setImageToBlur: (UIImage *)image
            blurRadius: (CGFloat)blurRadius
       completionBlock: (LBBlurredImageCompletionBlock) completion;

/**
 Set gaussian blur version of the provided image to the UIImageView
 
 */

- (void)setImageViewToBlurWithImage:(UIImage *)image andBlurRadius: (CGFloat)blurRadius;

- (void)setImageViewToBlurWithImage:(UIImage *)image andBlurRadius: (CGFloat)blurRadius completionBlock: (LBBlurredImageCompletionBlock) completion;

+ (UIImage *)getImageLayoutWithImage:(UIImage *)image andSize:(CGSize)size;

@end
