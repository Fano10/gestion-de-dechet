#pragma once
#include"Dechet.h"
#include"Compteur.h"
using namespace std;
class DechetTraite {

private:

public:
	//constructeur
	DechetTraite();
	DechetTraite(Dechet* dechet);
	//destructeur
	~DechetTraite();

	//constructeur par copie
	DechetTraite(const DechetTraite& dechetTraite);

	//Methode

	Dechet* getDechet() const { return this->dechet; }
protected:
	Dechet* dechet;
};
