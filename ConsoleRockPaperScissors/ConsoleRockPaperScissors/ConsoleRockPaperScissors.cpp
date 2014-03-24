#include "ConsoleRockPaperScissors.h"

ConsoleRockPaperScissors::ConsoleRockPaperScissors(){
	model	=	new Model;
	view	=	new View(model);
	control =	new Control(view,model);
}
//勉強になったので残しておく　これはガチ。というか以前にビーカメさんから聞いてたわｗ忘れてるｗｗｗ
//ConsoleRockPaperScissors::ConsoleRockPaperScissors() :view(&model){←本来なら基底クラスのコンストラクタ呼び出し用？本の説明通りだと。だけど、これでコンストラクタ呼び出し
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

