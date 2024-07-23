#pragma once
#include<queue>
#include"DechetTraite.h"
#include"Compteur.h"

using namespace std;
class Camion {
private:
	int maxCapacite;
	int capacite;
	queue<DechetTraite*> pileDechets;

public:

	//Constructeur
	Camion() :Camion(80) {};
	Camion(int maxCapacite);

	//destructeur
	~Camion() { Compteur::ajouterDestructeur(); }

	//constructeur par copie
	Camion(const Camion& camion);

	//Methode
	int viderCamion(void);
	bool ajouterDechet(DechetTraite* dechetTraite);
};