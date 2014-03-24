#include "Control.h"


Control::Control(){

}
/*  makeCト 2014/3/24
引数つきコンストラクタ

引数:  View Model
戻り値: 無し
備考: 別クラスのオブジェクトを今のクラスに作った　同じクラスに代入。
*/
Control::Control(View* ArgumentModelView, Model* ArgumentModelModel){

	view = ArgumentModelView;
	model = ArgumentModelModel;
	state = enumHcINIT;
}

Control::~Control(){

}
/*  makeCト 2014/3/24
	mainLoop

	引数:  無し
	戻り値: ゲーム終了でfalse 
	備考:
*/
bool Control::mainLoop(){
	
	switch (state){
		case enumHcINIT:
			view->draw(state);
			state = enumHcGAME;
			break;
		case enumHcGAME:
			model->setHand();

			view->draw(state);

			model->judge();

			state = model->getState();
			break;
		case enumHcAIKO:
			view->draw(state);
			state = enumHcINIT;
			break;
		case enumHcWIN:
			view->draw(state);
			return false;
		case enumHcLOSE:
			view->draw(state);
			return false;
	}
	return true;
}