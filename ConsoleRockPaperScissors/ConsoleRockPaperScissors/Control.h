#pragma once

/*
INCLUDE
*/
#include "View.h"
#include "Model.h"
#include "Common.h"

class Control{
private:
	View* view;
	Model* model;
public:
	Control();
	Control(View*,Model*);
	~Control();
	int state;
	bool mainLoop();
};

