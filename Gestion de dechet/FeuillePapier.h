#pragma once
#include"Dechet.h"

class FeuillePapier :
	public Dechet {

public:
	//constructeur
	FeuillePapier() :Dechet(1, "feuille papier", 0, "blanc", PAPIER, 0, false, false) {};

	~FeuillePapier() {};

	FeuillePapier(const FeuillePapier& feuillepapier) :Dechet(feuillepapier) {};
};
