#pragma once
#include "CamionBleu.h"
#include "CamionVert.h"
#include "CamionBrun.h"
#include"Compteur.h"

class Depot {
private:
	int totalIDTRecyclable;
	int totalIDTNonRecyclable;
	int totalIDTCompostable;
public:
	//constructeur
	Depot();
	//Depot()
//destructeur

	~Depot() { Compteur::ajouterDestructeur(); }

	//constructeur par copie

	Depot(const Depot& depot);
	//Methode
	CamionBleu* getCamionBleu();
	CamionVert* getCamionVert();
	CamionBrun* getCamionBrun();
	void depotDechetsTraites(CamionVert* camion);
	void depotDechetsTraites(CamionBleu* camion);
	void depotDechetsTraites(CamionBrun* camion);
	friend ostream& operator<< (ostream& out, Depot const& depot);
};