#ifndef __LOGIN_SCENE_H__
#define __LOGIN_SCENE_H__

#include "cocos2d.h"
#include "../GameController/GameController.h"
using namespace cocos2d;

class LoginScene : public Layer
{
public:
    static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(LoginScene);
};

#endif // __LOADING_SCENE_H__