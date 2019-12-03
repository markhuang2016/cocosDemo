//
// Created by mark on 2019/12/3.
//

#include "SpriteTest.h"

bool SpriteTest::init() {

    initWithFile("HelloWorld.png");

    return true;
}

SpriteTest* SpriteTest::createO() {
    auto o=SpriteTest::create();
    return o;
}