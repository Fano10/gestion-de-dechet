#include"Operation2.h"

bool Operation2::effectuerOperation(Dechet* dechet) {
	if ((int)dechet->getMateriel() == 2) { // en plastique
		return true;
	}
	else {
		return false;
	}

}