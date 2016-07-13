#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "cocos2d.h"
#include "Arms.h"

USING_NS_CC;

class Character {
public:
	Character();

	//��������ֵget set
	void setHP(int);
	int getHP();

	//����������get set
	void setHPBar();
	ProgressTimer* getHPBar();

	//������ͼget set
	void setCharaSpr(Sprite*);
	Sprite* getCharaSpr();

	//��������get set
	void setArm(Arms);
	Arms getArm();

	//����λ��get set
	void setPos(float, float);
	float getPosX();
	float getPosY();

private:
	int HP;                        //��������ֵ
	ProgressTimer* hpBar;          //����������
	Sprite* character;             //������ͼ
	Arms arm;                      //���������

	//����λ��
	float posX;
	float posY;
};

#endif