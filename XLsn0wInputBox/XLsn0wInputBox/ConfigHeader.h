#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UIImage+Extension.h"

/*－－－－－－－－－－－－－－－－－－－－app的相关配置－－－－－－－－－－－－－－－－－－*/
/*------第三方SDK---App-Key------------------------相关值根据需要自行更改------------------------*/

#define UmengAppKey      @"5bd2b88bb465f583f80000f8"

#define kAlipayAppKey     @"2018110762008924"

#define kWeChatAppKey     @"wx05d1925fb9f0c50f"
#define kWeChatAppSecret  @"a6a116feaf464a3630352d5bd0124b55"

#define AlipayAppKey     @"2018110762008924"

#define kQQAppKey         @""
#define SinaAppKey       @""

#define JPushAppKey     @"b3c625895634920e706616d8"

/*---------------------------------用户相关信息-------------------------------------*/

#define kUsername           @"usernameNew"
#define kUserNickname       @"userNicknameNew"
#define kUserPassword       @"userPassword"
#define kUserID             @"userID"
#define kUserToken          @"userToken"
#define kUserPortraitUrl    @"userPortraitUrl"
#define kUserEmail          @"userEmail"
#define kUserGender         @"userGender"
#define kUserSign           @"userSign"
#define kUserTelephone      @"userTelephone"
#define kUserStatus         @"userStatus"
#define kUserType           @"userType"
#define kUserOSPlatform     @"userOSPlatform"


/*---------------------------------程序相关常数-------------------------------------*/
//App Id、下载地址、评价地址
#define kAppId      @"593499239"
#define kAppUrl     [NSString stringWithFormat:@"https://itunes.apple.com/us/app/ling-hao-xian/id%@?ls=1&mt=8",kAppId]
#define kRateUrl    [NSString stringWithFormat:@"itms-apps://ax.itunes.apple.com/WebObjects/MZStore.woa/wa/viewContentsUserReviews?type=Purple+Software&id=%@",kAppId]

#define kPlaceholderImage       [UIImage imageNamed:@"placeholderImage.png"]


/*---------------------------------程序全局通知---Notification-------------------------------------*/

#define WechatOpenSDKNotification   @"WechatOpenSDK"
#define AlipaySDKNotification       @"AlipaySDK"
#define AfterUserLogined            @"AfterUserLoginedSetRootViewControllerEqualToTabBarController"

#define kWoodTableViewState  @"kWoodTableViewState"

//重新登录通知
#define kReLoginNotification    @"ReLoginNotification"
#pragma mark - ——————— 用户相关 ————————
//登录状态改变通知
#define KNotificationLoginStateChange @"loginStateChange"

//自动登录成功
#define KNotificationAutoLoginSuccess @"KNotificationAutoLoginSuccess"

//被踢下线
#define KNotificationOnKick @"KNotificationOnKick"

#define AppForceQuit   PostNotification(KNotificationLoginStateChange, @NO)

//用户信息缓存 名称
#define KUserCacheName @"KUserCacheName"

//用户model缓存
#define KUserModelCache @"KUserModelCache"

/**
 *   新增设备的通知
 */
static NSString *classAcessAddNotification = @"ClassAcessAddNotification";

#pragma mark 常用资源字符串

static NSString *defaultAvatarString = @"mine_headimg";



#pragma mark - ——————— 网络状态相关 ————————

#define GetTagView(tag) [self.view viewWithTag:tag]
#define GetSelfTagView(tag) [self viewWithTag:tag]

//网络状态变化
#define KNotificationNetWorkStateChange @"KNotificationNetWorkStateChange"

#define GetTableViewCellFrom(tableView, cell) [tableView dequeueReusableCellWithIdentifier:NSStringFromClass([cell class])]
#define GetTableViewCell(cell) [tableView dequeueReusableCellWithIdentifier:NSStringFromClass([cell class])]
#define GetCollectionViewCell(cell) [collectionView dequeueReusableCellWithReuseIdentifier:NSStringFromClass([cell class]) forIndexPath:indexPath]

#define registerCell(cell) [self.tableView registerClass:[cell class] forCellReuseIdentifier:NSStringFromClass([cell class])]
#define registerTableViewCell(cell, tableView) [tableView registerClass:[cell class] forCellReuseIdentifier:NSStringFromClass([cell class])]


#define registerCollectionViewCell(cell) [self.collectionView registerClass:[cell class] forCellWithReuseIdentifier:NSStringFromClass([cell class])];

#define registerCollectionViewCellFrom(collectionView, cell) [collectionView registerClass:[cell class] forCellWithReuseIdentifier:NSStringFromClass([cell class])];

/*---------------------------------程序界面配置信息-------------------------------------*/

//设置app界面字体及颜色

#define kTitleFontLarge              [UIFont boldSystemFontOfSize:25]//一级标题字号
#define kTitleFontMiddle             [UIFont boldSystemFontOfSize:19]//二级标题字号
#define kTitleFontSmall              [UIFont boldSystemFontOfSize:16]//三级标题字号

#define kContentFontLarge            [UIFont systemFontOfSize:19]  //内容部分大字号
#define kContentFontMiddle           [UIFont systemFontOfSize:16]  //内容部分中字号
#define kContentFontSmall            [UIFont systemFontOfSize:13]  //内容部分小字号

#define UIImageName(string) [UIImage imageNamed:string]

/*--------------------------------颜色--------------------------------------*/

///App全局使用色
#define AppThemeColor               [UIColor xlsn0w_hexString:@"#57A1FF"]
#define AppSubThemeColor            [UIColor xlsn0w_hexString:@"#548EF0"]

#define App_57A1FF_Color            [UIColor xlsn0w_hexString:@"#57A1FF"]
#define App_548EF0_Color            [UIColor xlsn0w_hexString:@"#548EF0"]
#define App_4E8AFF_Color            [UIColor xlsn0w_hexString:@"#4E8AFF"]

#define AppSecondLevelColor         [UIColor xlsn0w_hexString:@"#C30E22"]
#define AppViewBackgroundColor      [UIColor xlsn0w_hexString:@"#F3F3F3"]

#define AppBtnDisabledColor         [UIColor xlsn0w_hexString:@"#D4D4D4"]
#define AppBtnNormalColor           AppThemeColor
#define AppBtnHighlightedColor      [UIColor xlsn0w_hexString:@"#289934"]
#define AppPayBtnHighlightedColor   [UIColor xlsn0w_hexString:@"#C57C3B"]

#define AppBlackTextColorAlpha      [UIColor xlsn0w_hexString:@"#000000" alpha:0.87]
#define AppBlackTextColor           [UIColor xlsn0w_hexString:@"#333333"]
#define AppBlackSubTextColor        [UIColor xlsn0w_hexString:@"#808080"]

#define AppGrayTextColorAlpha       [UIColor xlsn0w_hexString:@"#000000" alpha:0.54]
#define AppGrayTextColor            [UIColor xlsn0w_hexString:@"#757575"]
#define AppRedTextColor             [UIColor xlsn0w_hexString:@"#FF3C3C"]

#define AppTitleColor               [UIColor xlsn0w_hexString:@"#333333"]
#define AppSubtitleColor            [UIColor xlsn0w_hexString:@"#999999"]

#define App333333TitleColor         [UIColor xlsn0w_hexString:@"#333333"]
#define App666666TitleColor         [UIColor xlsn0w_hexString:@"#666666"]
#define App999999TitleColor         [UIColor xlsn0w_hexString:@"#999999"]
#define AppCCCCCCTitleColor         HexColor(@"#CCCCCC")

#define AppPriceColor               HexColor(@"#FC8D3C")

#define AppBlackColor               UIColor.blackColor
#define AppWhiteColor               UIColor.whiteColor
#define App9AlphaWhiteColor          [UIColor xlsn0w_hexString:@"#FFFFFF" alpha:0.9]
#define App5AlphaWhiteColor          [UIColor xlsn0w_hexString:@"#FFFFFF" alpha:0.5]

#define AppLightGrayTextColor       [UIColor xlsn0w_hexString:@"#000000" alpha:0.27]
#define AppLineColor                [UIColor xlsn0w_hexString:@"#000000" alpha:0.1]


#define AppWhiteTextColorAlpha      [UIColor xlsn0w_hexString:@"#FFFFFF" alpha:0.5]
#define AppWhiteTextColor           [UIColor xlsn0w_hexString:@"#FFFFFF"]

#define ViewBgColor                  AppViewBackgroundColor

#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]

#define AppCodeBtnHighlightedColor   [UIColor xlsn0w_hexString:@"#0BB81D" alpha:0.2]
#define AppTitleBtnHighlightedColor  AppLineColor

#define AppSystemFont(size)      [UIFont systemFontOfSize:size]
#define AppBoldSystemFont(size)  [UIFont boldSystemFontOfSize:15]
//导航栏颜色
#define NavBgColor          AppThemeColor
#define NavBgFontColor      HexFromRGB(0xFF6600)
#define NavTitleColor       [UIColor whiteColor]
#define NavBgBtnTitleColor  HexFromRGB(0x333333)
#define TabBarTitleColor    HexFromRGB(0xFF6600)

#define whiteNavImage [UIImage imageNamed:@"whiteNav"]

//提示view背景颜色
#define PromptBgColor HexFromRGB(0xEF4545)

//分割线颜色
#define LineColor HexFromRGB(0xCCCCCC)

//字体
#define FontColor HexFromRGB(0x333333)
//字体
#define FontColor_secondary HexFromRGB(0x999999)

//字体
#define Font_otherColor HexFromRGB(0x81A1DF)

//字体
#define Font_otherColor1 HexFromRGB(0xFF6600)
#define Font_otherColor2 HexFromRGB(0x666666)

//次级字色
#define FontColor1 HexFromRGB(0x1f1f1f)

//再次级字色
#define CFontColor2 HexFromRGB(0x5c5c5c)

#define SYSTEMFONT(FONTSIZE)    [UIFont systemFontOfSize:FONTSIZE]

#pragma mark -  字体区
/*---------------------------------字体-------------------------------------*/
//主标题STHeitiSC-Medium
#define FFontSC_Medium_17 [UIFont fontWithName:@"STHeitiSC-Medium" size:17.0f]
#define FFontSC_Medium_16 [UIFont fontWithName:@"STHeitiSC-Medium" size:16.0f]
#define FFontSC_Medium_15 [UIFont fontWithName:@"STHeitiSC-Medium" size:15.0f]
#define FFontSC_Medium_14 [UIFont fontWithName:@"STHeitiSC-Medium" size:14.0f]
#define FFontSC_Medium_13 [UIFont fontWithName:@"STHeitiSC-Medium" size:13.0f]
#define FFontSC_Medium_12 [UIFont fontWithName:@"STHeitiSC-Medium" size:12.0f]
#define FFontSC_Medium_11 [UIFont fontWithName:@"STHeitiSC-Medium" size:11.0f]
#define FFontSC_Medium_10 [UIFont fontWithName:@"STHeitiSC-Medium" size:10.0f]
#define FFontSC_Medium_09 [UIFont fontWithName:@"STHeitiSC-Medium" size:9.0f]

#define FFont_25 [UIFont systemFontOfSize:25.0f]
#define FFont_17 [UIFont systemFontOfSize:17.0f]
#define FFont_16 [UIFont systemFontOfSize:16.0f]
#define FFont_15 [UIFont systemFontOfSize:15.0f]
#define FFont_14 [UIFont systemFontOfSize:14.0f]
#define FFont_13 [UIFont systemFontOfSize:13.0f]
#define FFont_12 [UIFont systemFontOfSize:12.0f]
#define FFont_11 [UIFont systemFontOfSize:11.0f]
#define FFont_10 [UIFont systemFontOfSize:10.0f]
#define FFont_09 [UIFont systemFontOfSize:9.0f]

//内容部分正常显示颜色和突出显示颜色
#define kContentColorNormal      [UIColor colorWithRed:57/255.0 green:32/255.0 blue:0/255.0 alpha:1]
#define kContentColorHighlight   [UIColor colorWithRed:0/255.0 green:191/255.0 blue:225/255.0 alpha:1]

//几个常用色彩
#define kGrayColor              [UIColor colorWithRed:192/255.0 green:192/255.0 blue:192/255.0 alpha:1]
#define kBlackColor             [UIColor colorWithRed:50/255.0 green:50/255.0 blue:50/255.0 alpha:1]
#define kRedColor               [UIColor colorWithRed:255/255.0 green:110/255.0 blue:107/255.0 alpha:1]
#define kBlueColor              [UIColor colorWithRed:96/255.0 green:195/255.0 blue:202/255.0 alpha:1]
#define kClearColor             [UIColor clearColor]
#define kWhiteColor             [UIColor whiteColor]
#define kAppBgColor             [UIColor colorWithRed:236/255.0 green:236/255.0 blue:236/255.0 alpha:1]
#define kMainColor              [UIColor colorWithRed:64/255.0 green:168/255.0 blue:174/255.0 alpha:1]

#define convertJSON(obj) [NSString convertJSONString:obj]
//注意，关于 iOS10 系统版本的判断，可以用下面这个宏来判断。不能再用截取字符的方法。
#define SYSTEM_VERSION_GRATERTHAN_OR_EQUALTO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

#define currentApplication [UIApplication sharedApplication]

#define UserSharedDefaults [NSUserDefaults standardUserDefaults]
#define JPush_appKey @"83e03d123bf365100edb4d6b"
#define JPush_registrationID @"JPush_registrationID"
#define kNotification_HLHandleAgency @"kNotification_HLHandleAgency"
//登录状态改变通知
#define KNotificationLoginStateChange @"loginStateChange"
#define HL_Application_Menu_Order [NSString stringWithFormat:@"%@%@", @"HL_Application_Menu_Order", [NSUSER_DEFAULT objectForKey:HL_User_Login_UserId]]
#define HL_Application_menuJurisdiction [NSString stringWithFormat:@"%@%@", @"HL_Application_menuJurisdiction", [NSUSER_DEFAULT objectForKey:HL_User_Login_UserId]]

#define HL_HLGuideView_timer [NSString stringWithFormat:@"%@%@", @"HL_HLGuideView_timer", [NSUSER_DEFAULT objectForKey:HL_User_Login_UserId]]

//十六进制转换RGB
#define HexFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define kAppWindow          [UIApplication sharedApplication].delegate.window
#define kKeyWindow          [UIApplication sharedApplication].keyWindow
#define heightRow           44
#define nullType            [NSNull class]
#define responseNullData    [data[@"data"] isKindOfClass:[NSNull class]]
#define GetMethodName       [MethodGetName printf_method_getName_currentClass:[self class]]
#define width_scale    ([UIScreen mainScreen].bounds.size.width  / 375)///width*当前屏幕宽度比例
#define height_scale   ([UIScreen mainScreen].bounds.size.height / 667)///height*当前屏幕高度比例
//是否是空对象
#define isObjectNull(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))

///对象不为空
#define isNotNull(obj)   (!isObjectNull(obj))
#define isNull(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))

///信息提示框
#define show(text) [TipShow showCenterText:text];
#define showBottom(text) [TipShow showBottomText:text];

//系统版本
#ifndef SystemVersion
#define SystemVersion [UIDevice currentDevice].systemVersion.floatValue
#endif

#ifndef iOS6Later
#define iOS6Later (SystemVersion >= 6)
#endif

#ifndef iOS7Later
#define iOS7Later (SystemVersion >= 7)
#endif

#ifndef iOS8Later
#define iOS8Later (SystemVersion >= 8)
#endif

#ifndef iOS9Later
#define iOS9Later (SystemVersion >= 9)
#endif

#ifndef iOS9_1Later
#define iOS9_1Later (SystemVersion >= 9.1f)
#endif

#ifndef iOS11Later
#define iOS11Later (SystemVersion >= 11.0f)
#endif


#define AppDefaults [NSUserDefaults standardUserDefaults]
#define AppShared   [UIApplication sharedApplication]

///weak 弱引用对象
#define WeakSelfObj(type)  __weak typeof(type) weak##type = type;
#define WeakObj(obj) autoreleasepool{} __weak typeof(obj) obj##Weak = obj;
/* Xcode CodeSnippet添加如下代码块
 @WeakObj(<#obj#>);
 */

/// iPhoneX = true
#define is_iPhoneX_HL ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#define NavigationBar_Height_HL (is_iPhoneX_HL ? 88 : 64)
#define Tabbar_Height_HL (is_iPhoneX_HL ? 83 : 49)
#define SafeArea_Bottom_Height (is_iPhoneX_HL ? 34 : 0)
#define StatusHeight_HL [[UIApplication sharedApplication] statusBarFrame].size.height

#define kStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define kNavBarHeight 44.0
//注意：请直接获取系统的tabbar高度，若没有用系统tabbar，建议判断屏幕高度；之前判断状态栏高度的方法不妥，如果正在通话状态栏会变高，导致判断异常，下面只是一个例子，请勿直接使用！
#define kTopHeight (kStatusBarHeight + kNavBarHeight)

#define iPhone4       ([[UIScreen mainScreen] bounds].size.height == 480)
#define iPhone5       ([[UIScreen mainScreen] bounds].size.height == 568)
#define iPhone6       ([[UIScreen mainScreen] bounds].size.height == 667)
#define iPhone6P      ([[UIScreen mainScreen] bounds].size.height == 736)
#define iPhoneX       ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define NotificationDefaultCenter [NSNotificationCenter defaultCenter]

/*---------------------------------判断设备相关---------------------------------------*/

#define UI_IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define UI_IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define UI_IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREENSIZE_IS_35  (UI_IS_IPHONE && [[UIScreen mainScreen] bounds].size.height < 568.0)
#define SCREENSIZE_IS_40  (UI_IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0)
#define SCREENSIZE_IS_47  (UI_IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 667.0)
#define SCREENSIZE_IS_55  (UI_IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 736.0 || [[UIScreen mainScreen] bounds].size.width == 736.0)

//判断iPHoneXr
#define SCREENSIZE_IS_XR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)

//判断iPHoneX、iPHoneXs
#define SCREENSIZE_IS_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)
#define SCREENSIZE_IS_XS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)

//判断iPhoneXs Max
#define SCREENSIZE_IS_XS_MAX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)

#define IS_IPhoneX_All ([UIScreen mainScreen].bounds.size.height == 812 || [UIScreen mainScreen].bounds.size.height == 896)

//状态栏、导航栏、标签栏高度
#define Height_StatusBar [[UIApplication sharedApplication] statusBarFrame].size.height

#define Height_NavBar 44.0f

#define Height_TopBar (Height_StatusBar + Height_NavBar)

#define Height_TapBar (IS_IPhoneX_All ? 83.0f:49.0f)

#define Height_BottomSafe (IS_IPhoneX_All? 34.0f:0.0f)

#define SCREEN_HEIGHTL [UIScreen mainScreen].bounds.size.height
#define SCREEN_WIDTHL [UIScreen mainScreen].bounds.size.width
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define RGB16(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define RGBAlpha(rgbValue,alphaValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:alphaValue]


//判断iPhoneXs Max
#define iPhoneXs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)

//判断iPHoneXr
#define iPhoneXr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)


#define WoodType  0
#define FruitType 1
#define StoreType 2

//判断是否是ipad
#define isDevicePad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
//判断iPhone4系列
#define kiPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhone5系列
#define kiPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhone6系列
#define kiPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iphone6+系列
#define kiPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneX
#define IS_IPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPHoneXr
#define IS_IPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneXs
#define IS_IPHONE_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneXs Max
#define IS_IPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)

//iPhoneX系列
#define iPhoneX_Height_StatusBar ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 44.0 : 20.0)
#define iPhoneX_Height_NavBar ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 88.0 : 64.0)
#define Height_TabBar ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 83.0 : 49.0)

// 获取App的版本号
#define AppVersion          [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
//获取系统对象
#define kApplication        [UIApplication sharedApplication]
#define kAppWindow          [UIApplication sharedApplication].delegate.window
#define kAppDelegate        (AppDelegate*)[UIApplication sharedApplication].delegate
#define kRootViewController [UIApplication sharedApplication].delegate.window.rootViewController
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]

#define kStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define kNavHeight self.navigationController.navigationBar.frame.size.height
#define kTabBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)
#define kTopHeight (kStatusBarHeight + kNavBarHeight)

#define kNavStatusHeight self.navigationController.navigationBar.frame.size.height+[[UIApplication sharedApplication] statusBarFrame].size.height

#define initUITableView [[UITableView alloc] initWithFrame:CGRectMake(0, 0, kScreenWidth, kScreenHeight-[self navHeight]-self.safeAreaBottomHeight) style:UITableViewStylePlain];

#define initBaseTableView [[BaseTableView alloc] initWithFrame:CGRectMake(0, 0, kScreenWidth, kScreenHeight-[self navHeight]-self.safeAreaBottomHeight) style:UITableViewStylePlain];

#define PriceFormat(price) [NSString convertPriceFormat:price]
#define PriceFloatFormat(priceDouble) [NSString priceFormatFromDouble:priceDouble]
/*
 iOS开发中，接受后台的响应，然后转化为模型对象，最终转化为NSString对象，然后控件显示出来。这一切都是那么的自然那么的熟悉。
 一个数字，可以定义为number类型，也可以定义为字符串问题。如果后台返回的是字符串类型。在iOS json序列化的时候，会把字符串类型转化为NSString对象，这个一点问题没有。但是如果后台返回的是number类型。json序列化会将number类型转化为NSNumber对象。使用的时候，想当然的会将NSNumber转化为NSString对象。
 
 让后台定义double类型数据66.6，你转化为字符串会发现就是66.59999999999999。
 测试发现double转化为NSNumber的时候就会出现问题。double表示的字面值和其存储的值一般是不一样的，
 转化为NSNumber之后，有很大一些数字，在NSNumber的stringValue上会出错。
 
 解决方法可以是把取String的doubleValue，
 然后再.2f保留两位小数进行构造字符串。
 千万不能取floatValue，floatValue在大于15万的浮点数字就会出现不精确了（笔者做过遍历测试）。
 而doubleValue在数十亿的范围内都是字面上精确的。
 根本解决方法还是劝后台的同事把请求返回的数据全部设置为String类型
 如果涉及到计算的问题，那就只得乖乖转化为NSDecimalNumber对象了。
 
 */

//获取屏幕宽高
#define kScreen_Bounds [UIScreen mainScreen].bounds

#define Iphone6ScaleWidth KScreenWidth/375.0
#define Iphone6ScaleHeight KScreenHeight/667.0
//根据ip6的屏幕来拉伸
#define kRealValue(with) ((with)*(KScreenWidth/375.0f))

//强弱引用
#define kWeakSelf(type)  __weak typeof(type) weak##type = type;
#define kStrongSelf(type) __strong typeof(type) type = weak##type;

//View 圆角和加边框
#define ViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]

// View 圆角
#define ViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]

//property 属性快速声明 别用宏定义了，使用代码块+快捷键实现吧

// 当前系统版本
#define CurrentAppSystemVersion [[UIDevice currentDevice].systemVersion doubleValue]
//当前语言
#define CurrentAppLanguage [NSLocale preferredLanguages] objectAtIndex:0]

//-------------------打印日志-------------------------
//DEBUG  模式下打印日志,当前行
#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DLog(...)
#endif

//拼接字符串
#define NSStringFormat(format,...) [NSString stringWithFormat:format,##__VA_ARGS__]

//颜色
#define KClearColor [UIColor clearColor]
#define KWhiteColor [UIColor whiteColor]
#define KBlackColor [UIColor blackColor]
#define KGrayColor [UIColor grayColor]
#define KGray2Color [UIColor lightGrayColor]
#define KBlueColor [UIColor blueColor]
#define KRedColor [UIColor redColor]
#define kRandomColor    KRGBColor(arc4random_uniform(256)/255.0,arc4random_uniform(256)/255.0,arc4random_uniform(256)/255.0)        //随机色生成

//字体
#define UIFont_boldSystemFontOfSize(FONTSIZE)   [UIFont boldSystemFontOfSize:FONTSIZE]
#define UIFont_systemFontOfSize(FONTSIZE)    [UIFont systemFontOfSize:FONTSIZE]
#define AppFont(NAME, FONTSIZE)    [UIFont fontWithName:(NAME) size:(FONTSIZE)]


//定义UIImage对象
#define ImageWithFile(_pointer) [UIImage imageWithContentsOfFile:([[NSBundle mainBundle] pathForResource:[NSString stringWithFormat:@"%@@%dx", _pointer, (int)[UIScreen mainScreen].nativeScale] ofType:@"png"])]
#define IMAGE_NAMED(name) [UIImage imageNamed:name]

//数据验证
#define StrValid(f) (f!=nil && [f isKindOfClass:[NSString class]] && ![f isEqualToString:@""])
#define SafeStr(f) (StrValid(f) ? f:@"")
#define HasString(str,key) ([str rangeOfString:key].location!=NSNotFound)

#define ValidStr(f) StrValid(f)
#define ValidDict(f) (f!=nil && [f isKindOfClass:[NSDictionary class]])
#define ValidArray(f) (f!=nil && [f isKindOfClass:[NSArray class]] && [f count]>0)
#define ValidNum(f) (f!=nil && [f isKindOfClass:[NSNumber class]])
#define ValidClass(f,cls) (f!=nil && [f isKindOfClass:[cls class]])
#define ValidData(f) (f!=nil && [f isKindOfClass:[NSData class]])

//获取一段时间间隔
#define kStartTime CFAbsoluteTime start = CFAbsoluteTimeGetCurrent();
#define kEndTime  NSLog(@"Time: %f", CFAbsoluteTimeGetCurrent() - start)
//打印当前方法名
#define ITTDPRINTMETHODNAME() ITTDPRINT(@"%s", __PRETTY_FUNCTION__)


//发送通知
#define PostNotification(name, obj) [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj];
//#define AddObserver(sel, name)      [[NSNotificationCenter defaultCenter] addObserver:self selector:sel name:name object:nil];

//单例化一个类
#define SINGLETON_FOR_HEADER(className) \
\
+ (className *)shared##className;

#define SINGLETON_FOR_CLASS(className) \
\
+ (className *)shared##className { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[self alloc] init]; \
}); \
return shared##className; \
}


//-------------------系统----------------
#pragma mark - 系统
//当前系统版本
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
//版本判断语句,是否是version以后的
#define IOS(version) (([[[UIDevice currentDevice] systemVersion] intValue] >= version)?1:0)

//获取当前语言
#define GetCurrentAppLanguage [[NSLocale preferredLanguages] objectAtIndex:0]

//检查系统版本
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)
//-------------------系统----------------

//-------------------设备相关----------------
#pragma mark - 设备相关
//判断是什么大小的机型 4，4s ; 5,5s ; 6,6s ; 6+,6+s
#define iphone4s CGSizeEqualToSize(CGSizeMake(640,960), [[UIScreen mainScreen]currentMode].size)
#define iphone5 CGSizeEqualToSize(CGSizeMake(640,1136), [[UIScreen mainScreen]currentMode].size)
#define iphone6 CGSizeEqualToSize(CGSizeMake(750,1334), [[UIScreen mainScreen]currentMode].size)
#define iphone6Plus CGSizeEqualToSize(CGSizeMake(1242,2208), [[UIScreen mainScreen]currentMode].size)

//获取屏幕宽度、高度

#define appWidth [UIScreen mainScreen].bounds.size.width
#define appHeight [UIScreen mainScreen].bounds.size.height

//获取状态栏和导航栏高度

#define appStatusBarHeight  [UIApplication sharedApplication].statusBarFrame.size.height

#define appNavigationBarHeight  self.navigationController.navigationBar.frame.size.height

//-------------------设备相关----------------

#define ReplaceRootViewController(vc) [[AppDelegate shareAppDelegate] replaceRootViewController:vc]


//-----------------警告处理----------------
#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)
//-----------------警告处理----------------



/*--------------------------------开发中常用到的宏定义--------------------------------------*/

//系统目录
#define kDocuments  [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject]


//----------方法简写-------
#define mAppDelegate        (AppDelegate *)[[UIApplication sharedApplication] delegate]
#define mWindow             [[[UIApplication sharedApplication] windows] lastObject]
#define mKeyWindow          [[UIApplication sharedApplication] keyWindow]
#define mUserDefaults       [NSUserDefaults standardUserDefaults]
#define mNotificationCenter [NSNotificationCenter defaultCenter]

//加载图片
#define mImageByName(name)        [UIImage imageNamed:name]
#define mImageByPath(name, ext)   [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:name ofType:ext]]

//以tag读取View
#define mViewByTag(parentView, tag, Class)  (Class *)[parentView viewWithTag:tag]
//读取Xib文件的类
#define mViewByNib(Class, owner) [[[NSBundle mainBundle] loadNibNamed:Class owner:owner options:nil] lastObject]

//id对象与NSData之间转换
#define mObjectToData(object)   [NSKeyedArchiver archivedDataWithRootObject:object]
#define mDataToObject(data)     [NSKeyedUnarchiver unarchiveObjectWithData:data]

//度弧度转换
#define mDegreesToRadian(x)      (M_PI * (x) / 180.0)
#define mRadianToDegrees(radian) (radian*180.0) / (M_PI)

//颜色转换
#define mRGBColor(r, g, b)         [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]
#define mRGBAColor(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
//rgb颜色转换（16进制->10进制）
#define mRGBToColor(rgb) [UIColor colorWithRed:((float)((rgb & 0xFF0000) >> 16))/255.0 green:((float)((rgb & 0xFF00) >> 8))/255.0 blue:((float)(rgb & 0xFF))/255.0 alpha:1.0]

//G－C－D
#define kGCDBackground(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define kGCDMain(block)       dispatch_async(dispatch_get_main_queue(),block)

//简单的以AlertView显示提示信息
#define mAlertView(title, msg) \
UIAlertView *alert = [[UIAlertView alloc] initWithTitle:title message:msg delegate:nil \
cancelButtonTitle:@"确定" \
otherButtonTitles:nil]; \
[alert show];


//----------页面设计相关-------

#define mNavBarHeight         44
#define mTabBarHeight         49
#define mScreenWidth          ([UIScreen mainScreen].bounds.size.width)
#define mScreenHeight         ([UIScreen mainScreen].bounds.size.height)


//----------设备系统相关---------
#define mRetina   ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define mIsiP5    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136),[[UIScreen mainScreen] currentMode].size) : NO)
#define mIsPad    (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define mIsiphone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define mIsiOS7 [[[UIDevice currentDevice] systemVersion] floatValue] == 7.0
#define mIsiOS6 [[[UIDevice currentDevice] systemVersion] floatValue] == 6.0

#define mSystemVersion   ([[UIDevice currentDevice] systemVersion])
#define mCurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])
#define mAPPVersion      [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define mFirstLaunch     mAPPVersion     //以系统版本来判断是否是第一次启动，包括升级后启动。
#define mFirstRun        @"firstRun"     //判断是否为第一次运行，升级后启动不算是第一次运行

//--------调试相关-------

//ARC
#if __has_feature(objc_arc)
//compiling with ARC
#else
#define mSafeRelease(object)     [object release];  x=nil
#endif

//调试模式下输入NSLog，发布后不再输入。
#ifndef __OPTIMIZE__
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...) {}
#endif

#if mTargetOSiPhone
//iPhone Device
#endif

#if mTargetOSiPhoneSimulator
//iPhone Simulator
#endif

#define placeholderAppImage      [UIImage imageNamed:@"PlaceholderImg"]
#define defaultAvatarImage       [UIImage imageNamed:@"defaultAvatar"]
#define HomeCyclePlaceholderIMG  [UIImage imageNamed:@"HomeCyclePlaceholderIMG"]

/// CATransition Type

static NSString * const TrAnimaType_Fade                   = @"fade";                       //淡入淡出
static NSString * const TrAnimaType_Push                   = @"push";                       //推挤
static NSString * const TrAnimaType_Reveal                 = @"reveal";                     //揭开
static NSString * const TrAnimaType_MoveIn                 = @"moveIn";                     //覆盖
static NSString * const TrAnimaType_Cube                   = @"cube";                       //立方体
static NSString * const TrAnimaType_SuckEffect             = @"suckEffect";                 //吮吸
static NSString * const TrAnimaType_OglFlip                = @"oglFlip";                    //翻转
static NSString * const TrAnimaType_RippleEffect           = @"rippleEffect";               //波纹
static NSString * const TrAnimaType_PageCurl               = @"pageCurl";                   //翻页
static NSString * const TrAnimaType_PageUnCurl             = @"pageUnCurl";                 //反翻页
static NSString * const TrAnimaType_CameraIrisHollowOpen   = @"cameraIrisHollowOpen";       //开镜头
static NSString * const TrAnimaType_CameraIrisHollowClose  = @"cameraIrisHollowClose";      //关镜头
static NSString * const TrAnimaType_CurlDown               = @"curlDown";                   //下翻页
static NSString * const TrAnimaType_CurlUp                 = @"curlUp";                     //上翻页
static NSString * const TrAnimaType_FlipFromLeft           = @"flipFromLeft";               //左翻转
static NSString * const TrAnimaType_FlipFromRight          = @"flipFromRight";              //右翻转


#define IQKeyboardSharedManager   [IQKeyboardManager sharedManager]

#define HexColor(hexString)  [UIColor xlsn0w_hexString:hexString]

#define GetPriceFromNumber(number)   [NSString stringWithFormat:@"%.2f", [number floatValue]/100]
#define GetOrderPriceFromNumber(number)   [NSString stringWithFormat:@"%.2f", [number floatValue]]
#define GetStringFromNumber(number)  [XLsn0w xl_getNSStringWithNumber:number]
#define GetNumberFromString(string)  [XLsn0w xl_getNSNumberWithString:string];

#define GetRMBPriceFromNumber(number)   [NSString stringWithFormat:@"¥ %.2f", [number floatValue]/100]
#define GetPriceUnitFromNumber(number)   [NSString stringWithFormat:@"%.2f元", [number floatValue]/100]

#define GetRMBPriceFromInt(int)  [NSString stringWithFormat:@"¥ %.2f", int];
#define GetPriceFromInt(int)     [NSString stringWithFormat:@"%.2f", int];

#define GetStringFromInt(int)     [NSString stringWithFormat:@"%ld", int];

///搜索宏定义
#define CJ_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

//#define  CJ_StatusBarHeight      (CJ_iPhoneX ? 44.f : 20.f)

//#define  CJ_NavigationBarHeight  44.f

//#define  CJ_TabbarHeight         (CJ_iPhoneX ? (49.f+34.f) : 49.f)

//#define  CJ_TabbarSafeBottomMargin         (CJ_iPhoneX ? 34.f : 0.f)

#define  CJ_StatusBarAndNavigationBarHeight  (CJ_iPhoneX ? 88.f : 64.f)

//
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width

#define TableViewDefaultRect CGRectMake(0, 0, kScreenWidth, kScreenHeight)

#define TableViewMinusNavHeightRect CGRectMake(0, 0, kScreenWidth, kScreenHeight-[self navHeight])

//搜索框颜色
#define kSearchBarTFDColor UIColorHex(0x00B38A)

//文字颜色
#define kMainTextColor UIColorHex(0x646464)

#define UIColorHexString(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]


/** 字体离边框的水平距离 */
#define kTitleHorizontal_space 10.0f

/** 字体离边框的竖直距离 */
#define kTitleVertical_space   5.0f

/** tagLab之间的水平间距 */
#define kTagHorizontal_margin  15.0f

/** tagLab之间的竖直间距 */
#define kTagVertical_margin    10.0f

/** tagLab与屏幕左右间距 */
#define kTagScreen_margin  30

/** tag字体 **/
#define kTagFont [UIFont boldSystemFontOfSize:13]

//标题高度
static CGFloat const kTagTitleHeight = 20.f;

//清除tip文本
static NSString *const deleteTip = @"删除全部搜索历史？";

//key
static NSString *const kHistroySearchData = @"HistroySearchData";

//最大历史搜索条数
static NSInteger const kMaxHistroyNum = 10;

#define iPhoneXRAndXSMAX (kScreenWidth == 414.f && kScreenHeight == 896.f ? YES : NO)
// iPhoneX
#define iPhoneXAndXS (kScreenWidth == 375.f && kScreenHeight == 812.f ? YES : NO)
#define autoNavBarHeight ((iPhoneXAndXS || iPhoneXRAndXSMAX)  ? 88.f : 64.f)
#define ButtonHighlighted(button, backgroundColor) [button setBackgroundImage:[UIImage xlsn0w_imageWithColor:backgroundColor] forState:UIControlStateHighlighted];
//比例适配
#define WBaseWidth 375
#define WBaseHeight 667

#define logJSON(obj) XLsn0wLog(@"obj = %@", convertJSON(obj));
#define logObj(obj) XLsn0wLog(@"obj = %@", obj);

#define kScreenRect CGRectMake(0, 0, kScreenWidth, kScreenHeight)
#define reloadTableViewData [self.tableView reloadData];///刷新UI
#define reloadData(obj) [obj reloadData];

#define IntegerFormat(integer) [NSString stringWithFormat:@"%ld", integer]
#define IntFormat(int) [NSString stringWithFormat:@"%d", int]

#define QwScaleW(valueSize) ((valueSize) * (kScreenWidth/WBaseWidth))
#define QwScaleH(valueSize) ((valueSize) * (kScreenHeight/WBaseHeight))
/***********************************************************************************************************************/
/***********************************************************************************************************************/
//融云 APPkey
#define RCIMAppKey                     @"k51hidwqkn8kb"///测试
//#define RCIMAppKey                     @"tdrvipkstq0t5"///正式

#pragma mark 导航条的高度

// 判断是否是iPhone X
#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
//#define iPhoneX = (kScreenHeight == 812.0f) ? YES : NO;
// 状态栏高度
#define iPhoneXStatus_BAR_HEIGHT (iPhoneX ? 44.f : 20.f)
// 导航栏高度
#define iPhoneXNavgation_BAR_HEIGHT (iPhoneX ? 88.f : 64.f)
// tabBar高度
#define iPhoneXTab_BAR_HEIGHT (iPhoneX ? (49.f+34.f) : 49.f)
// home indicator
#define iPhoneXHOME_INDICATOR_HEIGHT (iPhoneX ? 34.f : 0.f)

//屏幕比例
#define WidthScale [UIScreen mainScreen].bounds.size.width/375.0
#define HeightScale [UIScreen mainScreen].bounds.size.height/667.0

//是否为空或是[NSNull null]

#define IsNilOrNull(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))
#define IsEmptyStr(_ref)     (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) || ([(_ref)isEqualToString:@""]))

#pragma mark 导航条的高度

//导航条title的font
#define kNavTitleFont UIFont_size(18.0)
//标签栏item的font
#define kTabBarItemFont UIFont_size(11.0)
//选项卡的高度
#define tabsHeight 45.0
//预定义圆角数
#define kAppMainCornerRadius 6.0

#define jpush_channel @"App Store"
#define jpush_key @"b3c625895634920e706616d8"
#define MeiQiaKey @"c11c82f1864bb8b694b2062b47785460"//@"8a21df99c95dace806a41c02379efce6"


#pragma mark 字体相关
//字体
#define UIFont_size(size) [UIFont systemFontOfSize:size]
#define UIFont_bold_Size(size) [UIFont boldSystemFontOfSize:size]


#pragma mark - Dev



#define NotNilAndNullOutString(_ref)  (((_ref) != nil) && (![(_ref) isEqual:[NSNull null]]))//字典 除String
//是否为空或是[NSNull null]
#define NotNilAndNull(_ref)  (((_ref) != nil) && (![(_ref) isEqual:[NSNull null]]) && (![(_ref)isEqualToString:@""]))
#define IsNilOrNull(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))
#define IsEmptyStr(_ref)     (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) || ([(_ref)isEqualToString:@""]))
#define NotNull(_ref)  (((_ref) != nil) && (![(_ref) isEqual:[NSNull null]]) ))

#pragma mark 颜色相关
//颜色
#define UICOLOR_FROM_RGB(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define kAppBlackColor [UIColor blackColor]         //黑色
#define kAppGrayColor [UIColor grayColor]           //灰色
#define kAppDarkGrayColor [UIColor darkGrayColor]   //深灰色
#define kAppLightGrayColor [UIColor lightGrayColor] //浅灰色
#define kAppWhiteColor [UIColor whiteColor]         //白色
#define kAppRedColor [UIColor redColor]             //红色
#define kAppOrangeColor [UIColor orangeColor]       //橙色
#define kAppClearColor [UIColor clearColor]         //透明色
#define kAppGreenColor [UIColor greenColor]         //绿色
#define KAppBackBgColor UICOLOR_FROM_RGB(240,240,240,1)//主背景色
#define kAppBlueColor UICOLOR_FROM_RGB(29,121,164,1)
#define kAppGoodColor UIColorFromRGB(0x1b82d1) //主调十六进制红色0x607d8b
#define kAppHuiSeColor UIColorFromRGB(0xF5F5F5) //灰色啊
#define kAppDarkTextColor [UIColor darkTextColor]
#define kAppLightTextColor [UIColor lightTextColor]
#define kAppLineColor UICOLOR_FROM_RGB(200,201,201,1)//细线的颜色
#define kAppMainBgColor UICOLOR_FROM_RGB(236,237,239,1)
//#define kCBlueBgColor UICOLOR_FROM_RGB(65,105,225,1)
#define UICOLOR_FROM_RGB(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define kViewBgColor UICOLOR_FROM_RGB(235,236,237,1)
#define kFontColor UICOLOR_FROM_RGB(62,176,193,1)
#define kFontBtnBgColor UICOLOR_FROM_RGB(254,219,10,1)
#define kSectionFontColor UICOLOR_FROM_RGB(79,76,76,1)
#define kOrderNumColor UICOLOR_FROM_RGB(62,176,193,1)
#define kYellowBtnBgColor UICOLOR_FROM_RGB(255,222,0,1)
#define kCyanBtnBgColor UICOLOR_FROM_RGB(62,176,193,1)
#define SDColor(r, g, b, a) [UIColor colorWithRed:(r / 255.0) green:(g / 255.0) blue:(b / 255.0) alpha:a]

#define Global_tintColor [UIColor colorWithRed:0 green:(190 / 255.0) blue:(12 / 255.0) alpha:1]

#define Global_mainBackgroundColor SDColor(248, 248, 248, 1)

#define TimeLineCellHighlightedColor [UIColor colorWithRed:92/255.0 green:140/255.0 blue:193/255.0 alpha:1.0]
#define DAY @"day"

#define NIGHT @"night"
