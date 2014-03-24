#pragma once
/*
INCLUDE
*/
#include "Model.h"
#include "Common.h"

class View //•`‰æŠÖŒW
{
	private:
		Model* model;
		char* drawStringData[10];
	public:
		View();
		View(Model*);
		~View();

		
		void draw(int);					//•`‰æ
		void makeStringComment(int);	//•`‰æ‚·‚éƒRƒƒ“ƒg‚ğì¬

		
		
};

