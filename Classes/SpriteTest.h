//
// Created by mark on 2019/12/3.
//

#ifndef DEMO_SPRITETEST_H
#define DEMO_SPRITETEST_H

#include "cocos2d.h"

using namespace cocos2d;

class SpriteTest: public Sprite {
    virtual bool init();

    CREATE_FUNC(SpriteTest);


public:
    static SpriteTest* createO();


};


#endif //DEMO_SPRITETEST_H
