#pragma once
#include<list>
#include"Dechet.h"
#include"BoiteCarton.h"
#include"BouteilleBiere.h"
#include"SacChips.h"
#include"QuelqueChose.h"
#include"Chaise.h"
#include"DechetMalConcu.h"
#include"VerreCafe.h"
#include"PlanteVerte.h"
#include"FeuillePapier.h"
#include"RestantNourriture.h"
#include"Compteur.h"
using namespace std;


class ChargementDechet {

private:

	//Dechet* listeDechets
	list <Dechet*>* listeDechets;

public:
	//constructeur
	ChargementDechet(void);
	ChargementDechet(list<Dechet*>* listeDechets);

	//destructeur
	~ChargementDechet(void);

	//constructeur par copie

	ChargementDechet(const ChargementDechet& dechet);

	//Methode
	list<Dechet*>* getDechet()const { return listeDechets; }

};

