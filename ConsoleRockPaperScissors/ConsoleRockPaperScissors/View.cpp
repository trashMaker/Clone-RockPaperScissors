#include "View.h"


View::View(){
	
}
/*  makeC�g 2014/3/24
�������R���X�g���N�^�ݒ�

����:  Model�N���X�̃|�C���^�@�@
�߂�l: 
���l:	�����Icout�ŕ\������Ƃ�����Ȃ��B�|�C���^�ւ̔z��̗��K�������������B
�@�@�@	�Q�����z��ł͂߂�ǂ����Ă̂̊m�F

		�l�I�ɂ��̂悤�Ȏ�������������		dsD = drawStringData(�ȉ�dsD)
					
		char* comment =   dsD[1] + player->getHand() + dsD[3]; 
		
		


*/
View::View(Model* ArgumentModel){
	drawStringData[0] = "�L�[���͂��s���Ă�������";
	drawStringData[1] = "���Ȃ��̏o�������";
	drawStringData[2] = "cpu�̏o�������";
	drawStringData[3] = "�ł��B";
	drawStringData[4] = "���Ȃ���";
	drawStringData[5] = "����";
	drawStringData[6] = "����";
	drawStringData[7] = "�A�C�R";
	model = ArgumentModel;
}

View::~View(){
	
}
/*	makeC�g 2014/3/24
    ���ׂĂ̕`��

    ����:	state�ɉ����ĕ`����e��ς���
    �߂�l:	����
	���l:	
*/
void View::draw(int state){
	makeStringComment(state);
}
//void View::makeStringComment(int state){
//
//	using namespace std;
//
//	switch (state){
//	case enumHcINIT://�L�[����͂��Ă�������
//		cout << drawStringData[0] << endl;
//		break;
//	case enumHcGAME://���Ȃ��̏o�������  �ł��@npc�̏o������́@�ł�
//		cout << drawStringData[1] << model->getPlayerHand() << drawStringData[3] << endl;
//		cout << drawStringData[2] << model->getnpcHand() << drawStringData[3] << endl;
//		break;
//	case enumHcAIKO://�A�C�R�ł�
//		cout << drawStringData[7] << drawStringData[3] << endl;
//		break;
//	case enumHcWIN://���Ȃ��̏����ł�
//		cout << drawStringData[4] << drawStringData[5] << drawStringData[3];
//		break;
//	case enumHcLOSE://���Ȃ��̕����ł�
//		cout << drawStringData[4] << drawStringData[6] << drawStringData[3];
//	}
//}
void View::makeStringComment(int state){
	using namespace std;

	switch (state){
	case enumHcINIT://�L�[����͂��Ă�������
		cout << drawStringData[0] << endl;
		break;
	case enumHcGAME://���Ȃ��̏o�������  �ł��@npc�̏o������́@�ł�
		cout << drawStringData[1] << model->getPlayerHand() << drawStringData[3] << endl;
		cout << drawStringData[2] << model->getnpcHand() << drawStringData[3] << endl;
		break;
	case enumHcAIKO://�A�C�R�ł�
		cout << drawStringData[7] << drawStringData[3] << endl;
		break;
	case enumHcWIN://���Ȃ��̏����ł�
		cout << drawStringData[4] << drawStringData[5] << drawStringData[3];
		break;
	case enumHcLOSE://���Ȃ��̕����ł�
		cout << drawStringData[4] << drawStringData[6] << drawStringData[3];
	}
}