#pragma once
#include "Camion.h"
#include"DechetTraiteNonRecyclable.h"

class CamionVert :
	public Camion {

public:
	//constructeur
	CamionVert() :Camion() {};
	CamionVert(int maxCapacite) :Camion(maxCapacite) {};

	//destructeur
	~CamionVert() { Camion::~Camion(); }
	//constructeur par copie
	CamionVert(const CamionVert& camion) :Camion(camion) {};

	//Methode
	inline bool ajouterDechet(DechetTraiteNonRecyclable* dechetTraite) { return Camion::ajouterDechet(dechetTraite); }
};
