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
		bool flag; //勝ち負け on 引き分け　off
		char* pName;//誰が勝ったか
	}JUDGEDATA;

	JUDGEDATA* judgeData;	//値を書き換えやすいようにする。クラス風に扱える練習兼

	Player* player;
	Npc* npc;
public:
	Model();
	~Model();
	void setHand();		//playerとnpcのsetHandを同時に扱う 多態勢っぽく
	void judge();		//結果判定
	char getPlayerHand(){ return player->getHand(); }
	char getnpcHand(){ return npc->getHand(); }
	int getState();
};

