#pragma once
/*
INCLUDE
*/
#include "Model.h"
#include "Common.h"

class View //�`��֌W
{
	private:
		Model* model;
		char* drawStringData[10];
	public:
		View();
		View(Model*);
		~View();

		
		void draw(int);					//�`��
		void makeStringComment(int);	//�`�悷��R�����g���쐬

		
		
};

