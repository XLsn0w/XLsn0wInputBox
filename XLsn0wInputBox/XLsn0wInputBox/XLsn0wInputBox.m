
#import "XLsn0wInputBox.h"

#import <XLsn0w/XLsn0w.h>
#import <Masonry/Masonry.h>
#import "ConfigHeader.h"
#import "UITextView+Placeholder.h"

#define XLsn0wInputBoxWidth 300
#define XLsn0wInputBoxHeight 240

@interface XLsn0wInputBox ()

/** 确认按钮回调 */
@property (nonatomic, copy) confirmCallback confirmBlock;
/** 蒙版 */
@property (nonatomic, strong) UIButton *maskView;

@end

@implementation XLsn0wInputBox

- (instancetype)init {
    if (self = [super init]) {
        [self initUI];
    }
    return self;
}

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        [self initUI];
    }
    return self;
}

- (void)initUI {
    self.maskView = [[UIButton alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.maskView.backgroundColor = [UIColor blackColor];
    self.maskView.layer.opacity = 0.3;
//    [[self.maskView rac_signalForControlEvents:UIControlEventTouchUpInside]
//     subscribeNext:^(__kindof UIControl * _Nullable x) {
//         [self hide];
//    }];
    [self.maskView addTarget:self action:@selector(hide) forControlEvents:(UIControlEventTouchUpInside)];
    
    self.backgroundColor = UIColor.whiteColor;
    [self xlsn0w_addCornerRadius:4];
    self.frame = CGRectMake(0, 0, XLsn0wInputBoxWidth, XLsn0wInputBoxHeight);
    self.center = CGPointMake(self.maskView.center.x, self.maskView.frame.size.height * 0.4);
    
    _title = [[UILabel alloc] init];
    [self addSubview:_title];
    [_title mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.mas_equalTo(self);
        make.top.mas_equalTo(16);
    }];
//    [_title addTextFont:[UIFont systemFontOfSize:16] textColor:HexColor(@"#333333")];
    _title.textColor = HexColor(@"#333333");
    _title.font = AppSystemFont(16);
    
    _inputTextView = [[UITextView alloc] init];
    [self addSubview:_inputTextView];
    [_inputTextView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(22);
        make.right.mas_equalTo(-22);
        make.top.mas_equalTo(48);
        make.bottom.mas_equalTo(-70);
    }];
    [_inputTextView xlsn0w_layerBorderWidth:1 borderColor:HexColor(@"#E1E1E1") cornerRadius:4];
    
    _cancelBtn = [UIButton new];
    [self addSubview:_cancelBtn];
    [_cancelBtn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.bottom.mas_equalTo(0);
        make.left.mas_equalTo(0);
        make.width.mas_equalTo(XLsn0wInputBoxWidth/2);
        make.height.mas_equalTo(55);
    }];
    [_cancelBtn setTitle:@"取消" forState:(UIControlStateNormal)];
    [_cancelBtn setTitleColor:HexColor(@"#666666") forState:(UIControlStateNormal)];
    _cancelBtn.titleLabel.font = [UIFont systemFontOfSize:16];
//    [[_cancelBtn rac_signalForControlEvents:UIControlEventTouchUpInside]
//     subscribeNext:^(__kindof UIControl * _Nullable x) {
//        [self hide];
//    }];
    [_cancelBtn addTarget:self action:@selector(hide) forControlEvents:(UIControlEventTouchUpInside)];
    _cancelBtn.backgroundColor = AppWhiteColor;
    ButtonHighlighted(_cancelBtn, AppLineColor)
    
    _confirmBtn = [UIButton new];
    [self addSubview:_confirmBtn];
    [_confirmBtn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.bottom.mas_equalTo(0);
        make.right.mas_equalTo(0);
        make.width.mas_equalTo(XLsn0wInputBoxWidth/2);
        make.height.mas_equalTo(55);
    }];
    [_confirmBtn setTitle:@"确认" forState:(UIControlStateNormal)];
    [_confirmBtn setTitleColor:HexColor(@"#4E8AFF") forState:(UIControlStateNormal)];
    _confirmBtn.titleLabel.font = [UIFont systemFontOfSize:16];
//    [[_confirmBtn rac_signalForControlEvents:UIControlEventTouchUpInside]
//     subscribeNext:^(__kindof UIControl * _Nullable x) {
//         [self confirmAction];
//     }];
    [_confirmBtn addTarget:self action:@selector(confirmAction) forControlEvents:(UIControlEventTouchUpInside)];
    _confirmBtn.backgroundColor = AppWhiteColor;
    ButtonHighlighted(_confirmBtn, AppLineColor)
    
    UIView* horizontalLine = [[UIView alloc] init];
    [self addSubview:horizontalLine];
    [horizontalLine mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(0);
        make.bottom.mas_equalTo(-55);
        make.width.mas_equalTo(XLsn0wInputBoxWidth);
        make.height.mas_equalTo(1);
    }];
    horizontalLine.backgroundColor = AppLineColor;
    
    UIView* verticalLine = [[UIView alloc] init];
    [self addSubview:verticalLine];
    [verticalLine mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.mas_equalTo(self);
        make.bottom.mas_equalTo(0);
        make.width.mas_equalTo(1);
        make.height.mas_equalTo(55);
    }];
    verticalLine.backgroundColor = AppLineColor;
}

#pragma mark - 设置控件圆角
- (void)setCornerRadius:(UIView *)view {
    if (self.radius) {
        view.layer.cornerRadius = self.radius;
    } else {
        view.layer.cornerRadius = 5.0;
    }
    
    view.layer.masksToBounds = YES;
}

- (void)setPlaceholder:(NSString *)placeholder {
    _placeholder = [placeholder copy];
    self.inputTextView.placeholder = self.placeholder;
}

- (void)show {
    [UIView animateWithDuration:0.2 animations:^{
        [kKeyWindow addSubview:self.maskView];
        [kKeyWindow addSubview:self];
        [_inputTextView becomeFirstResponder];
    } completion:^(BOOL finished) {}];
}

- (void)exitKeyboard {
    [self endEditing:YES];
}

- (void)hide {
    [UIView animateWithDuration:0.2 animations:^{
        [self exitKeyboard];
        [self removeFromSuperview];
        [self.maskView removeFromSuperview];
    } completion:^(BOOL finished) {

    }];
}

#pragma mark - 接收传过来的block
- (void)confirmBtnClickBlock:(confirmCallback)block {
    self.confirmBlock = block;
}

#pragma mark - 点击确认按钮
- (void)confirmAction {
    [self hide];
    if (self.confirmBlock) {
        self.confirmBlock(self.inputTextView.text);
    }
}

@end
