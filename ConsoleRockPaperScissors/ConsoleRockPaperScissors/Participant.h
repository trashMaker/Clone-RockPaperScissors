#pragma once	//�C���N���[�h�K�[�h
/*
INCLUDE
*/
#include "Common.h"

/*
 �W�����P��������Ƃ��Ɏg���f�[�^�p������Ďg��
*/
class Participant{

private:

protected:

	char	 hand;	//�@��
	char*	 pName;
public:

	Participant();
	~Participant();

	char*	getName()	{return pName;	}
	char	getHand()	{return hand;	}

	virtual void setHand() = 0;

};

