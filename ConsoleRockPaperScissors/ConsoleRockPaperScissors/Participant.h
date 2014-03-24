#pragma once	//インクルードガード
/*
INCLUDE
*/
#include "Common.h"

/*
 ジャンケンをするときに使うデータ継承されて使う
*/
class Participant{

private:

protected:

	char	 hand;	//　手
	char*	 pName;
public:

	Participant();
	~Participant();

	char*	getName()	{return pName;	}
	char	getHand()	{return hand;	}

	virtual void setHand() = 0;

};

