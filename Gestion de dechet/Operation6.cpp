#include"Operation6.h"

bool Operation6::effectuerOperation(Dechet* dechet) {
	if ((int)dechet->getType() == 0 || (int)dechet->getType() == 6) {
		return true;
	}
	else {
		return false;
	}

}