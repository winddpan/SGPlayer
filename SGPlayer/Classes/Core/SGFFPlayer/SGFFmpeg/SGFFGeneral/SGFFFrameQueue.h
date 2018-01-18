//
//  SGFFFrameQueue.h
//  SGPlayer
//
//  Created by Single on 2018/1/18.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGFFFrame.h"

@interface SGFFFrameQueue : NSObject

- (NSInteger)count;
- (long long)duration;
- (long long)size;

- (void)putFrame:(id <SGFFFrame>)frame;
- (id <SGFFFrame>)getFrameSync;
- (id <SGFFFrame>)getFrameAsync;

- (void)flush;
- (void)destroy;

@end
