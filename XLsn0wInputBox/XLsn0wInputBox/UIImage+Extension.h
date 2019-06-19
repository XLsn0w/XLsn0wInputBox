
#import <UIKit/UIKit.h>

@interface UIImage (Extension)

+ (CGSize)getSizeFromURL:(id)URL;
+ (UIImage *)imageFromURLString: (NSString *)urlString;
/*
*  返回一张自由拉伸的图片
*/
+ (UIImage *)resizedImageWithName:(NSString *)name;

//颜色转换成图片
+ (UIImage *)xlsn0w_imageWithColor:(UIColor *)color;
/* 图片压缩到指定大小
 * image 要压缩的图片
 * apSize 压缩的制定尺寸 如：CGSizeMake(1440, 1080)
 *
 */
+(UIImage*)imageByScalingAndCroppingForSize:(UIImage *)image appointSize:(CGSize )apSize;

- (UIImage*)TransformtoSize:(CGSize)size;

+ (UIImage *)imageCompressForSize:(UIImage *)sourceImage targetSize:(CGSize)size;

- (UIImage *)resizeImage:(CGSize)resize;

/**
 *  拉伸图片
 */
+ (UIImage *)resizableImage:(NSString *)imageName;

/**
 *  拉伸图片
 */
+ (UIImage *)imageWithResize:(NSString *)imageName;

/**
 *  拉伸图片
 */
+ (UIImage *)imageWithResize:(NSString *)imageName left:(CGFloat)left top:(CGFloat)top;


/**
 *  加载图片
 */
+ (UIImage *)imageWithName:(NSString *)name;

@end
