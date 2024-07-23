#pragma once
#include"Dechet.h"

class RestantNourriture:
	public Dechet{

public:
	RestantNourriture() :Dechet(50, "reste de nourriture",0, "rouge", NOURRITURE,0, false, false) {};
	~RestantNourriture() {};
	RestantNourriture(const RestantNourriture& dechet) :Dechet(dechet) {};
};
