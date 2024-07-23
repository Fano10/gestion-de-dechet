#pragma once

#include"Dechet.h"

class BouteilleBiere :
	public Dechet {
public:
	BouteilleBiere() :Dechet(75, "Bouteille de biere", 0, "vert", BOUTEILLE,5, 0, 1) {};
	~BouteilleBiere() {};
	BouteilleBiere(const BouteilleBiere& dechet) :Dechet(dechet) {};
};
