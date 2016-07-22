#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "cocos2d.h"
#include "Arms.h"

USING_NS_CC;

class Character {
public:
	Character()
	{
		
	}

	//��������ֵget set
	void setHP(int);
	int getHP();

	//����������get set
	void setHPBar();
	ProgressTimer* getHPBar();

	//������ͼget set
	void setCharaSpr(Sprite* c)
	{
		chara = c;
	}

	Sprite* getCharaSpr()
	{
		return chara;
	}

	//��������get set
	//void setArm(Arms);
	//Arms getArm();

	//����λ��get set
	void setPos(float, float);
	float getPosX();
	float getPosY();

	void setWalkFrame(Vector<SpriteFrame*> v)
	{
		walk = v;
	}

	Vector<SpriteFrame*> getWalkFrame()
	{
		return walk;
	}

	void setDeadFrame(Vector<SpriteFrame*> v)
	{
		dead = v;
	}

	Vector<SpriteFrame*> getDeadFrame()
	{
		return dead;
	}



private:
	int HP;                        //��������ֵ
	ProgressTimer* hpBar;          //����������
	Sprite* chara;             //������ͼ
	//Arms arm;                      //���������

	//����λ��
	float posX;
	float posY;

	cocos2d::Vector<SpriteFrame*> walk;
	cocos2d::Vector<SpriteFrame*> dead;

};

#endif