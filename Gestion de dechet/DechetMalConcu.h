#pragma once

#include"Dechet.h"

class DechetMalConcu :
	public Dechet {
public:
	DechetMalConcu() :Dechet(60, "dechet mal concu", 0, "violet", STYROFOAM, 0, 1, 0) {};
	~DechetMalConcu() {};
	DechetMalConcu(const DechetMalConcu& dechet) :Dechet(dechet) {};
};
