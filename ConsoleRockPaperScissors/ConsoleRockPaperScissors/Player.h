#pragma once
/*
INCLUDE
*/
#include "Participant.h"


class Player :public Participant
{
	public:
		Player();
		~Player();

		void setHand();		//手を決める
};

