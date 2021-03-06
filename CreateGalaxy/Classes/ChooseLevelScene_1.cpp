//
//  ChooseLevelScene_1.cpp
//  CreateGalaxy
//
//  Created by 温泽 on 2016/8/24.
//
//

#include "ChooseLevelScene.h"
#include "ChooseLevelScene_1.h"
#include "GamingScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

ChooseLevelScene_1::ChooseLevelScene_1()
{
    
}

ChooseLevelScene_1::~ChooseLevelScene_1()
{
    
}

cocos2d::Scene * ChooseLevelScene_1::createScene()
{
    auto scene = Scene::create();
    auto layer = ChooseLevelScene_1::create();
    scene->addChild(layer);
    return scene;
}

bool ChooseLevelScene_1::init()
{
    if( !Layer::init() )
    {
        return false;
    }
    
    auto rootnode = CSLoader::createNode(".//ChooseLevelScene//ChooseLevelScene_1.csb");
    addChild(rootnode);
    
    Vector<MenuItem*> menuItemSprites_0;
    Vector<MenuItem*> menuItemSprites_1;
    menuItemSprites_0.pushBack(
    MenuItemSprite::create( Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_0.png" ) ),
                            Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_0.png" ) ),
                            CC_CALLBACK_1( ChooseLevelScene_1::callBack2_0, this) ) );
    menuItemSprites_0.pushBack(
    MenuItemSprite::create( Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_1.png" ) ),
                            Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_1.png" ) ),
                            CC_CALLBACK_1( ChooseLevelScene_1::callBack2_1, this) ) );
    menuItemSprites_0.pushBack(
    MenuItemSprite::create( Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_2.png" ) ),
                            Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_2.png" ) ),
                            CC_CALLBACK_1( ChooseLevelScene_1::callBack2_2, this) ) );
    menuItemSprites_1.pushBack(
    MenuItemSprite::create( Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_3.png" ) ),
                            Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_3.png" ) ),
                            CC_CALLBACK_1( ChooseLevelScene_1::callBack2_3, this) ) );
    menuItemSprites_1.pushBack(
    MenuItemSprite::create( Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_4.png" ) ),
                            Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_4.png" ) ),
                            CC_CALLBACK_1( ChooseLevelScene_1::callBack2_4, this) ) );
    menuItemSprites_1.pushBack(
    MenuItemSprite::create( Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_5.png" ) ),
                            Sprite::createWithTexture( Director::getInstance()->getTextureCache()->getTextureForKey( ".//ChooseLevelScene//2_5.png" ) ),
                            CC_CALLBACK_1( ChooseLevelScene_1::callBack2_5, this) ) );
    icon_0 = Menu::createWithArray( menuItemSprites_0 );
    icon_1 = Menu::createWithArray( menuItemSprites_1 );
    icon_0->alignItemsHorizontallyWithPadding( Director::getInstance()->getVisibleSize().width / 10 );
    icon_1->alignItemsHorizontallyWithPadding( Director::getInstance()->getVisibleSize().width / 10 );
    icon_0->setPositionY( Director::getInstance()->getVisibleSize().height * 0.7 );
    icon_1->setPositionY( Director::getInstance()->getVisibleSize().height * 0.35 );
    addChild(icon_0);
    addChild(icon_1);
    
    auto LeftArrow = cocos2d::ui::Button::create( ".//ChooseLevelScene//ArrowLeft.png" );
    LeftArrow->setPosition( Vec2( Director::getInstance()->getVisibleSize().width * 0.05, Director::getInstance()->getVisibleSize().height / 2 ) );
    LeftArrow->Widget::setScale( 0.3 );
    LeftArrow->addTouchEventListener(
                                      [&](Ref* sender, cocos2d::ui::Widget::TouchEventType type)
                                      {
                                          switch ( type )
                                          {
                                              case ui::Widget::TouchEventType::BEGAN:
                                                  log( "LeftArrow" );
                                                  Director::getInstance()->replaceScene( TransitionSlideInR::create( .5, ChooseLevelScene::createScene() ) );
                                                  break;
                                              case ui::Widget::TouchEventType::ENDED:
                                                  break;
                                              case ui::Widget::TouchEventType::CANCELED:
                                                  break;
                                              case ui::Widget::TouchEventType::MOVED:
                                                  break;
                                          }
                                      } );
    
    addChild(LeftArrow);
    
    auto backLabel = Label::createWithTTF( "Back" , ".//fonts//Start.ttf" , 50);
    backLabel->setTextColor( Color4B::WHITE );
    Menu * backMenu = Menu::createWithItem( MenuItemLabel::create( backLabel, CC_CALLBACK_1( ChooseLevelScene_1::callBackBack, this) ) );
    backMenu->setPosition( Vec2( Director::getInstance()->getVisibleSize().width * 0.95 , Director::getInstance()->getVisibleSize().height * 0.04) );
    addChild(backMenu);
    return true;
}

void ChooseLevelScene_1::callBack2_0(Ref*)
{
    log("2_0");
}

void ChooseLevelScene_1::callBack2_1(Ref*)
{
    log("2_1");
}

void ChooseLevelScene_1::callBack2_2(Ref*)
{
    log("2_2");
}
void ChooseLevelScene_1::callBack2_3(Ref*)
{
    log("2_3");
}

void ChooseLevelScene_1::callBack2_4(Ref*)
{
    log("2_4");
}

void ChooseLevelScene_1::callBack2_5(Ref*)
{
    log("2_5");
}

void ChooseLevelScene_1::callBackBack(Ref*)
{
    log("Back_1");
    Director::getInstance()->popScene();
}

