#include "Player.h"


Player::Player(){
	pName = "PLAYER";
}


Player::~Player(){

}
/*  makeCƒg 2014/3/24
player‚ÌHand‚Ìİ’è

ˆø”:  –³‚µ
–ß‚è’l: 
”õl:
*/
void Player::setHand(){
	using namespace std;

	while (1){

		cin >> hand;

		if (hand == 'g' || hand == 'p' || hand == 's')break;
	}
}

