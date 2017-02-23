//
//  M2Position.h
//  BB2048
//
//  Created by Danqing on 3/19/14.
//  Copyright (c) 2014 Danqing. All rights reserved.
//

#ifndef BB2048_M2Position_h
#define BB2048_M2Position_h

typedef struct Position {
  NSInteger x;
  NSInteger y;
} M2Position;

CG_INLINE M2Position M2PositionMake(NSInteger x, NSInteger y) {
  M2Position position;
  position.x = x; position.y = y;
  return position;
}

#endif
