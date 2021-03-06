//
//  FJUser.h
//  百思不得姐
//
//  Created by  高帆 on 16/5/25.
//  Copyright © 2016年  高帆. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FJUser : NSObject

/**
 *  用户名
 */
@property (nonatomic, copy) NSString *username;
/**
 *  性别
 */
@property (nonatomic, copy) NSString *sex;
/**
 *  头像
 */
@property (nonatomic, copy) NSString *profile_image;

@end
