#pragma once
/*
INCLUDE
*/

#include "Common.h"

class Random
{
private:
	
public:
	Random();
	~Random();

	int getRand(){ return rand() % 2;}	//npc�̃N���X�̒��ɓ���悤�����������ǁA���チ���Z���k����邩��p���B�t�@�C���킯�Ă���
};

