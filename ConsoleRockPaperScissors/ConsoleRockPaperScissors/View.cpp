#include "View.h"


View::View(){
	
}
/*  makeCト 2014/3/24
引数つきコンストラクタ設定

引数:  Modelクラスのポインタ　　
戻り値: 
備考:	そこ！coutで表示しろとか言わない。ポインタへの配列の練習がしたかった。
　　　	２次元配列ではめんどうってのの確認

		個人的にこのような事がしたかった		dsD = drawStringData(以下dsD)
					
		char* comment =   dsD[1] + player->getHand() + dsD[3]; 
		
		


*/
View::View(Model* ArgumentModel){
	drawStringData[0] = "キー入力を行ってください";
	drawStringData[1] = "あなたの出した手は";
	drawStringData[2] = "cpuの出した手は";
	drawStringData[3] = "です。";
	drawStringData[4] = "あなたの";
	drawStringData[5] = "勝ち";
	drawStringData[6] = "負け";
	drawStringData[7] = "アイコ";
	model = ArgumentModel;
}

View::~View(){
	
}
/*	makeCト 2014/3/24
    すべての描画

    引数:	stateに応じて描画内容を変える
    戻り値:	無し
	備考:	
*/
void View::draw(int state){
	makeStringComment(state);
}
//void View::makeStringComment(int state){
//
//	using namespace std;
//
//	switch (state){
//	case enumHcINIT://キーを入力してください
//		cout << drawStringData[0] << endl;
//		break;
//	case enumHcGAME://あなたの出した手は  です　npcの出した手は　です
//		cout << drawStringData[1] << model->getPlayerHand() << drawStringData[3] << endl;
//		cout << drawStringData[2] << model->getnpcHand() << drawStringData[3] << endl;
//		break;
//	case enumHcAIKO://アイコです
//		cout << drawStringData[7] << drawStringData[3] << endl;
//		break;
//	case enumHcWIN://あなたの勝ちです
//		cout << drawStringData[4] << drawStringData[5] << drawStringData[3];
//		break;
//	case enumHcLOSE://あなたの負けです
//		cout << drawStringData[4] << drawStringData[6] << drawStringData[3];
//	}
//}
void View::makeStringComment(int state){
	using namespace std;

	switch (state){
	case enumHcINIT://キーを入力してください
		cout << drawStringData[0] << endl;
		break;
	case enumHcGAME://あなたの出した手は  です　npcの出した手は　です
		cout << drawStringData[1] << model->getPlayerHand() << drawStringData[3] << endl;
		cout << drawStringData[2] << model->getnpcHand() << drawStringData[3] << endl;
		break;
	case enumHcAIKO://アイコです
		cout << drawStringData[7] << drawStringData[3] << endl;
		break;
	case enumHcWIN://あなたの勝ちです
		cout << drawStringData[4] << drawStringData[5] << drawStringData[3];
		break;
	case enumHcLOSE://あなたの負けです
		cout << drawStringData[4] << drawStringData[6] << drawStringData[3];
	}
}