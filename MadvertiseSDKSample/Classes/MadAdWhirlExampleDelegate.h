// Copyright 2011 madvertise Mobile Advertising GmbH
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>
#import "MadAdWhirlProtocol.h"


@interface MadAdWhirlExampleDelegate : NSObject <MadAdWhirlProtocol> 
{
  UIViewController *_controller;
  MadvertiseAnimationClass _ani_type;
  double _ani_duration;
  id _selectorTarget;
  SEL _aSelector;
}

@property (nonatomic,assign) MadvertiseAnimationClass animationType;
@property (nonatomic,retain) UIViewController *controller;
@property (nonatomic,assign) double animationDuration;
@property (nonatomic,assign) SEL selector;
@property (nonatomic,assign) id selectorTarget;

- (id) initWithUIController:(UIViewController*) c;

@end