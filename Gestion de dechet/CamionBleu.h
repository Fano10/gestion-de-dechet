#pragma once

#include"Camion.h"
#include"DechetTraiteRecyclable.h"

using namespace std;

class CamionBleu :
	public Camion {

public:
	//constructeur
	CamionBleu() : Camion() {};
	CamionBleu(int maxCapacite) : Camion(maxCapacite) {};
	//destructeur
	~CamionBleu() {};

	//Constructeur par cope

	CamionBleu(const CamionBleu& camion) :Camion(camion) {};
	//Methode
	inline bool ajouterDechet(DechetTraiteRecyclable* dechetTraite) { return Camion::ajouterDechet(dechetTraite); }

};
