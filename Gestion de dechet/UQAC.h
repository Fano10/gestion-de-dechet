#pragma once

#include"ChargementDechet.h"
#include"Compteur.h"

class UQAC {

public:
	//constructeur
	UQAC() { Compteur::ajouterConstructeur(); }

	//destructeur

	~UQAC() { Compteur::ajouterDestructeur(); }
	//constructeur par copie

	UQAC(const UQAC&) { Compteur::ajouterConstructeurCopie(); }

	static ChargementDechet* getChargementDechets();
};