#pragma once
#include"Dechet.h"
#include<string>
using namespace std;

class PlanteVerte :
	public Dechet {
public:
	PlanteVerte() : Dechet(0, "plante", 0, "verte", PLASTIQUE, 40, false, false) {};

	~PlanteVerte() {} // le destructeur de Dechet sera appele automatiquement

	PlanteVerte(const PlanteVerte& planteVerte) :Dechet(planteVerte) {};
};
