#pragma once
/*
INCLUDE
*/
#include "Player.h"
#include "Npc.h"

class Model
{
private:
	typedef struct _JUDGEDATA{
		bool flag; //�������� on ���������@off
		char* pName;//�N����������
	}JUDGEDATA;

	JUDGEDATA* judgeData;	//�l�����������₷���悤�ɂ���B�N���X���Ɉ�������K��

	Player* player;
	Npc* npc;
public:
	Model();
	~Model();
	void setHand();		//player��npc��setHand�𓯎��Ɉ��� ���Ԑ����ۂ�
	void judge();		//���ʔ���
	char getPlayerHand(){ return player->getHand(); }
	char getnpcHand(){ return npc->getHand(); }
	int getState();
};

