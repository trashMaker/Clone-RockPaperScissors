#include "Npc.h"


Npc::Npc(){

	pName = "Npc";	
	setHand();		//�ŏ��̎�����߂�
}


Npc::~Npc(){

}
/*  makeC�g 2014/3/24
npc��Hand�̐ݒ�

����:  ����
�߂�l: 
���l:int�^�̃����_����char�^�ɕϊ����Ď�����Ă�
*/
void Npc::setHand(){
	
	switch(random->getRand()){
	case 0:
		hand = 'g';
		break;
	case 1:
		hand = 's';
		break;
	case 2:
		hand = 'p';
	}
}