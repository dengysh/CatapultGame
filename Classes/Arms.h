#ifndef __ARMS_H__
#define __ARMS_H__

#include "cocos2d.h"

USING_NS_CC;

extern enum armsName {ARTILLERY, PISTOL, STAFF};  //��������ö����

class Arms {
public:
	Arms();

	//�����˺�get set
	void setDamage(int);
	int getDamage();

	//������ը��Χget set
	void setRange(int);
	int getRange();

	//������ͼget set
	void setArmSpr(Sprite*);
	Sprite* getArmSpr();

	//��������get set
	void setArmName(enum armsName);
	enum armsName getArmName();

	//��������cd get set
	void setCd(int);
	int getCd();

private:
	int damage;                                    //�������˺�
	int range;                                     //������ը��Χ
	Sprite* arm;                                   //������ͼ
	enum armsName armN;                            //��������
	int cd;                                        //��������cd
};

#endif