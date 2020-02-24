//
//  AdLimeAppLovinNativeConfig.h
//  AdLimeMediation_AppLovin
//
//  Created by AdLimeSdk on 2020/2/23.
//  Copyright © 2020 AdLimeSdk. All rights reserved.
//

#import <AdLimeSdk/AdLimeSdk.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdLimeAppLovinNativeConfig : AdLimeNetworkConfig

/**
 * Determines whether to begin video ads in a muted state or not. Defaults to YES unless changed in the dashboard.
 */
@property (assign, atomic) BOOL muted;

@end

NS_ASSUME_NONNULL_END
