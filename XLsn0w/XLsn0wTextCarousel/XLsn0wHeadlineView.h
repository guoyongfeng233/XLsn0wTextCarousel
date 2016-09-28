/*********************************************************************************************
 *   __      __   _         _________     _ _     _    _________   __         _         __   *
 *	 \ \    / /  | |        | _______|   | | \   | |  |  ______ |  \ \       / \       / /   *
 *	  \ \  / /   | |        | |          | |\ \  | |  | |     | |   \ \     / \ \     / /    *
 *     \ \/ /    | |        | |______    | | \ \ | |  | |     | |    \ \   / / \ \   / /     *
 *     /\/\/\    | |        |_______ |   | |  \ \| |  | |     | |     \ \ / /   \ \ / /      *
 *    / /  \ \   | |______   ______| |   | |   \ \ |  | |_____| |      \ \ /     \ \ /       *
 *   /_/    \_\  |________| |________|   |_|    \__|  |_________|       \_/       \_/        *
 *                                                                                           *
 *********************************************************************************************/

#import <UIKit/UIKit.h>

@interface ItemObject : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *detail;

@property (nonatomic, strong) NSString *title1;
@property (nonatomic, strong) NSString *detail1;
@end


@interface HintView : UIView

@property (nonatomic, copy) ItemObject * item;

@end

@interface XLsn0wHeadlineView : UIView

@property (nonatomic, copy) NSArray * items;
@property (nonatomic, assign) BOOL autoscroll;
@property (nonatomic, assign) NSTimeInterval timeInterval;

@property (nonatomic, copy) void (^didSelectItemAtIndex)(NSUInteger index);

@property (nonatomic, strong) UIScrollView *bottomScrollView;
@property (nonatomic, strong) UIImageView *leftImageView;

@end