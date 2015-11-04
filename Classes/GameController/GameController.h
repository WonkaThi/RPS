#ifndef __GAME_CONTROLLER_H__
#define __GAME_CONTROLLER_H__

#include "cocos2d.h"
#include "SpriteController.h"
#include "ResourceController.h"
#include "ButtonController.h"
#include "LabelController.h"

class GC
{
	GC();
	static GC *m_controller;
	LabelController *m_lblController;
	ButtonController *m_btnController;
	SpriteController *m_sprController;
	ResourceController *m_resourceController;
public:
	static GC *gI();
	LabelController *lbl();
	ButtonController *btn();
	SpriteController *spr();
	ResourceController *resoure();
};

#endif // __HELLOWORLD_SCENE_H__
