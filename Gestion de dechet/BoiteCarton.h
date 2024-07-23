#pragma once
#include"Dechet.h"

class BoiteCarton :
	public Dechet {

public:

	BoiteCarton() :Dechet(5, "Carton", 0, "brun", CARTON, 5, 0, 0) {};
	~BoiteCarton() {};
	BoiteCarton(const BoiteCarton& dechet) :Dechet(dechet) {};
};
