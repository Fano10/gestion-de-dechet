#pragma once
#include"Dechet.h"

class VerreCafe :
	public Dechet {

public:
	VerreCafe() :Dechet(10, "verre cafe", 3, "brun", PLASTIQUE, 5, 1, 0) {};
	~VerreCafe() {};
	VerreCafe(const VerreCafe& dechet) :Dechet(dechet) {};
};