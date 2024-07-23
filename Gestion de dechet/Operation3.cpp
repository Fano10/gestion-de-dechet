#include"Operation3.h"

bool Operation3::effectuerOperation(Dechet* dechet) {
	if ((int)dechet->getMateriel() == 7) { // carton ou papier
		return true;
	}
	else {
		return false;
	}
}