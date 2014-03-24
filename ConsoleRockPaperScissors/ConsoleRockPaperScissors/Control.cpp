#include "Control.h"


Control::Control(){

}
/*  makeC�g 2014/3/24
�������R���X�g���N�^

����:  View Model
�߂�l: ����
���l: �ʃN���X�̃I�u�W�F�N�g�����̃N���X�ɍ�����@�����N���X�ɑ���B
*/
Control::Control(View* ArgumentModelView, Model* ArgumentModelModel){

	view = ArgumentModelView;
	model = ArgumentModelModel;
	state = enumHcINIT;
}

Control::~Control(){

}
/*  makeC�g 2014/3/24
	mainLoop

	����:  ����
	�߂�l: �Q�[���I����false 
	���l:
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