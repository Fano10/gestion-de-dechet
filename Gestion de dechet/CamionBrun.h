#pragma once
#include"Camion.h"
#include"DechetTraiteCompostable.h"

class CamionBrun :
	public Camion {

public:
	//constructeut
	CamionBrun() :Camion() {};
	CamionBrun(int maxCapacite) :Camion(maxCapacite) {};
	//destrucateur
	~CamionBrun() {};
	//constructeur par copie
	CamionBrun(const CamionBrun& camion) :Camion(camion) {};

	//Methode
	inline bool ajouterDechet(DechetTraiteCompostable* dechetTraite) { return Camion::ajouterDechet(dechetTraite); }
};
