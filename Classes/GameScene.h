#include "cocos2d.h"
#include <string>
#include "Artillery.h"
#include "Pistol.h"
#include "Knight.h"
#include "Staff.h"
using namespace std;

USING_NS_CC;

class Games : public cocos2d::Layer
{
public:
	// there's no 'id' in cpp, so we recommend returning the class instance pointer
	static cocos2d::Scene* createScene();

	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init();


	// implement the "static create()" method manually
	CREATE_FUNC(Games);

	/////////////////////
	/////////////////////
	/////////////////////

	//��������λ�ã�Ҫ����init��Ӽ��������÷���touch->getLocation().xΪ�������X���꣬Yͬ��
	//bool onTouchBegan(Touch *touch, Event *unused_event);

	//���¹�����ť�󣬷����̿�ʼ�ڶ�
	//virtual void onAttack(Ref* ref);

	//ȷ������󣬷�����ֹͣ����������ʼ����
	//virtual void onDirection(Ref* ref);

	//ȷ��������ը��Ͷ��
	//virtual void onPower(Ref* ref);

	//��ȡը�����
	int fallPointCal();

	//�ж��ӵ��Ƿ����е��ˣ���һ������Ϊ��㣬�ڶ���Ϊ��ը��Χ
	bool isAttacked(int fallPoint, int range);

	//�����˺�
	void damageCal(Character*, int damage);

	//�غϽ�����������ң�ͬʱ�趨��ť��Enable������
	void changePlayer();

	//�������ÿһ֡������һ�Σ�������Ҫ������ݣ�����ը����ĳ��ʱ�̵�λ��
	virtual void update(float dt) override;

	//���ӵ�
	void bullet1fire();
	void bullet2fire();

	void preloadMusic();
	void playBgm();

	
	Sprite* addPlayer(int x);// ������, x=������
	void addEdge();// ��ӱ߽��
	void addListener();// ��Ӽ�����
	void getFrameAction();// ���֡��������

	void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);
	bool onConcactBegan(PhysicsContact& contact);

private:

	/////////////
	//////////////
	///////////////
	cocos2d::Size visibleSize;
	cocos2d::Vec2 origin;
	cocos2d::Vector<SpriteFrame*> walk;
	cocos2d::Vector<SpriteFrame*> dead;

	Sprite* player1;
	Sprite* player2;

	Sprite* bullet1;
	Sprite* bullet2;


	int currentPlayer;          //���ڻغϵ����
	
};
