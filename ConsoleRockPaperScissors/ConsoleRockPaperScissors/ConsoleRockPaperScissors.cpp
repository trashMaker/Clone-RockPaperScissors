#include "ConsoleRockPaperScissors.h"

ConsoleRockPaperScissors::ConsoleRockPaperScissors(){
	model	=	new Model;
	view	=	new View(model);
	control =	new Control(view,model);
}
//�׋��ɂȂ����̂Ŏc���Ă����@����̓K�`�B�Ƃ������ȑO�Ƀr�[�J�����񂩂畷���Ă��킗�Y��Ă邗����
//ConsoleRockPaperScissors::ConsoleRockPaperScissors() :view(&model){���{���Ȃ���N���X�̃R���X�g���N�^�Ăяo���p�H�{�̐����ʂ肾�ƁB�����ǁA����ŃR���X�g���N�^�Ăяo��
//
//}

ConsoleRockPaperScissors::~ConsoleRockPaperScissors(){
	delete model;
	delete view;
	delete control;

}
void ConsoleRockPaperScissors::mainLoop(){
	while (1){
		if (!control->mainLoop())break;
	}
}

