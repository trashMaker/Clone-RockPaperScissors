#include "Model.h"


Model::Model(){
	player = new Player;
	npc = new Npc;
	judgeData = new JUDGEDATA;
}

Model::~Model(){
	delete player;
	delete npc;
	delete judgeData;
}
/*  makeCト 2014/3/24 
    playerオブジェクト、npcオブジェクトの手を決める

    引数:    無し
    戻り値: 　void
    備考:    多態勢の利用
*/
void Model::setHand(){

	Participant* participant[2];

	participant[0] = player;
	participant[1] = npc;
	
	for (int i = 0; i < 2; i++){

		participant[i]->setHand();
	}
}
/*  makeCト 2014/3/24
	ジャンケンの判定 

	引数:   judgeData  中身 bool 勝ち負けon or アイコ　off
	       char* 勝者の名前
	戻り値: void
	備考:
*/
void Model::judge(){

	char p1 = player->getHand();
	char n1	= npc->getHand();
	
	if (p1 == n1){//愛子様
		judgeData->flag =false;
	}
	else if (//勝った時
		p1 == 'g' && n1 == 's' ||// p1 グー　	 n1 チョキ
		p1 == 's' && n1 == 'p' ||// p1 チョキ	 n1 パー
		p1 == 'p' && n1 == 'g'){ // p1 パー   n1 グー

		judgeData->flag = true;
		judgeData->pName = player->getName();
	}
	else{//負けた時
		judgeData->flag = true;
		judgeData->pName = npc->getName();
	}
	
}
/*  makeCト 2014/3/24
stateの設定

引数:  無し
戻り値: state用に返す
備考:JUDGEDATAの中身で結果判定
*/
int Model::getState(){
	
	if (!judgeData->flag){
		return enumHcAIKO;
	}
	/*judgeData->flag　あいこ以外*/
	else if (judgeData->pName == player->getName() ){
		return enumHcWIN;
	}
	/*judgeData->flag　あいこ以外*/
	else
		return enumHcLOSE;
}