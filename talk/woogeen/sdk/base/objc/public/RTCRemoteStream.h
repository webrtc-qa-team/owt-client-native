//
//  Copyright (c) 2015 Intel Corporation. All rights reserved.
//

#import "RTCStream.h"

// This class represents a remote stream.
@interface RTCRemoteStream : RTCStream

/**
  Get the stream owner's ID.
  If will be an empty string if a stream is generated by MCU server.
*/
-(NSString*)getRemoteUserId;

@end
