#include"Operation1.h"


bool Operation1::effectuerOperation(Dechet* dechet) {
	if (dechet->estRigide() == true || dechet->estEnStyromousse() == true) {
		return true;
	}
	else {
		return false;
	}

}