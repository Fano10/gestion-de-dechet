#pragma once
#include"Dechet.h"

class SacChips :
	public Dechet {
public:
	SacChips() :Dechet(12, "sac chips", 5, "vert", PLASTIQUE, 3, 0, 1) {};
	~SacChips() {};
	SacChips(const SacChips& dechet) : Dechet(dechet) {};
};
