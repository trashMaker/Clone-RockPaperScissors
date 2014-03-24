#pragma once
/*
INLCUDE
*/
#include "Control.h"
#include "View.h"
#include "Model.h"

class ConsoleRockPaperScissors
{
private:
	Model* model;
	View* view;
	Control* control;
	//Model model;
	//View view;
	//Control control;
public:
	ConsoleRockPaperScissors();
	~ConsoleRockPaperScissors();

	void mainLoop();
};

