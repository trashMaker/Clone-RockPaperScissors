#pragma once
/*
INCLUDE
*/
#include "Participant.h"
#include "Random.h"

class Npc :public Participant{
private:
	Random* random;
public:
	Npc();
	~Npc();

	void setHand();		//手を決める
};

