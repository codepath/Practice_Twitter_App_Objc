//
//  User.h
//  twitter
//
//  Created by Sabrina Slattery on 6/7/21.
//  Copyright © 2021 Emerson Malca. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface User : NSObject

//MARK: Properties
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *screenName;

@end

NS_ASSUME_NONNULL_END
