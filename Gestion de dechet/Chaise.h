#pragma once
#include"Dechet.h"

class Chaise :
	public Dechet {
public:
	Chaise() :Dechet(90, "chaise", 0, "brun", BOIS, 7, 0, 1) {};
	~Chaise() {};
	Chaise(const Chaise& dechet) :Dechet(dechet) {};
};