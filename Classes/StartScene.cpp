#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* StartScene::createScene()
{
    auto scene = Scene::create();
    StartScene* s= StartScene::create();
    scene->addChild(s);
    return scene;
}


// on "init" you need to initialize your instance
bool StartScene::init()
{
    if ( !Scene::init() )
    {
        return false;
    }

    auto size=Director::getInstance()->getVisibleSize();
    Sprite *sprite = Sprite::create("HelloWorld.png");
    sprite->setPosition(size);
    addChild(sprite);

    return true;
}
