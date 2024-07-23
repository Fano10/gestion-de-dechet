#include"Operation5.h"

bool Operation5::effectuerOperation(Dechet* dechet) {
	if ((int)dechet->getMateriel() == 6) { // vegetal
		return true;
	}
	else {
		return false;
	}

}