#include "cocos2d.h"

class Story : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();


	// implement the "static create()" method manually
	CREATE_FUNC(Story);
};
