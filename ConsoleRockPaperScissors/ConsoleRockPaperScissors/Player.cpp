#include "Player.h"


Player::Player(){
	pName = "PLAYER";
}


Player::~Player(){

}
/*  makeC�g 2014/3/24
player��Hand�̐ݒ�

����:  ����
�߂�l: 
���l:
*/
void Player::setHand(){
	using namespace std;

	while (1){

		cin >> hand;

		if (hand == 'g' || hand == 'p' || hand == 's')break;
	}
}

