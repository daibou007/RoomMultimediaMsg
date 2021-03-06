/*                                                                            
  Copyright (c) 2014-2015, GoBelieve     
    All rights reserved.		    				     			
 
  This source code is licensed under the BSD-style license found in the
  LICENSE file in the root directory of this source tree. An additional grant
  of patent rights can be found in the PATENTS file in the same directory.
*/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Outbox.h"

@interface RoomOutbox : Outbox

@property(nonatomic)NSMutableDictionary *msgs;

+(RoomOutbox*)instance;

- (void)clearMsgs;

@end
