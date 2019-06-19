
#import <UIKit/UIKit.h>

/** 确认按钮回调的block */
typedef void(^confirmCallback)(NSString *inputString);

@interface XLsn0wInputBox : UIView

@property (strong, nonatomic) UILabel *title;
@property (strong, nonatomic) UIButton *cancelBtn;
@property (strong, nonatomic) UIButton *confirmBtn;
@property (strong, nonatomic) UITextView *inputTextView;

/** 圆角半径，默认5.0 */
@property (nonatomic, assign) CGFloat radius;
/** 确认按钮颜色 */
@property (nonatomic, strong) UIColor *confirmBgColor;
/** placeholder */
@property (nonatomic, strong) NSString *placeholder;

/** 弹出输入框 */
- (void)show;
/** 移除输入框 */
- (void)hide;
/** 点击确认按钮回调 */
- (void)confirmBtnClickBlock:(confirmCallback) block;

@end
