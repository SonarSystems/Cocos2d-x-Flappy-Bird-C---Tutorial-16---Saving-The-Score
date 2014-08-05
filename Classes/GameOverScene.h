#ifndef __GAME_OVER_SCENE_H__
#define __GAME_OVER_SCENE_H__

#include "cocos2d.h"

class GameOverScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene( unsigned int tempScore );

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameOverScene);
    
private:
    void GoToMainMenuScene( cocos2d::Ref *sender );
    void GoToGameScene( cocos2d::Ref *sender );
    
};

#endif // __GAME_OVER_SCENE_H__
