//
//  ADServiceFlowViewCell.h
//  AdelMall
//
//  Created by 张锐凌 on 2018/3/2.
//  Copyright © 2018年 Adel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADServiceFlowViewCell : UICollectionViewCell
/* 查看 点击回调 */
@property (nonatomic, copy) dispatch_block_t checkBtnClickBlock;
@end
