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

	int getRand(){ return rand() % 2;}	//npcのクラスの中に入れようか迷ったけど、今後メルセンヌ入れるから却下。ファイルわけておく
};

