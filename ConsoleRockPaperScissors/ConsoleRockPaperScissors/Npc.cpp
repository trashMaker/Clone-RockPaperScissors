#include "Npc.h"


Npc::Npc(){

	pName = "Npc";	
	setHand();		//Å‰‚Ìè‚ğŒˆ‚ß‚é
}


Npc::~Npc(){

}
/*  makeCƒg 2014/3/24
npc‚ÌHand‚Ìİ’è

ˆø”:  –³‚µ
–ß‚è’l: 
”õl:intŒ^‚Ìƒ‰ƒ“ƒ_ƒ€‚ğcharŒ^‚É•ÏŠ·‚µ‚Äè‚ğ“ü‚ê‚Ä‚é
*/
void Npc::setHand(){
	
	switch(random->getRand()){
	case 0:
		hand = 'g';
		break;
	case 1:
		hand = 's';
		break;
	case 2:
		hand = 'p';
	}
}