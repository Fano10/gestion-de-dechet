#include"Operation4.h"

bool Operation4::effectuerOperation(Dechet* dechet) {
	if (dechet->getCouleur() == "brun" && (int)dechet->getMateriel() == 5) { // nourriture brun
		return true;
	}
	else {
		return false;
	}

}