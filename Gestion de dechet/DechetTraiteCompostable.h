#pragma once
#include"DechetTraite.h"

class DechetTraiteCompostable :
	public DechetTraite {

public:
	// constructeur
	DechetTraiteCompostable() :DechetTraite() {};

	DechetTraiteCompostable(Dechet* dechet) :DechetTraite(dechet) {};

	// destructeur
	~DechetTraiteCompostable() {};

	//constructeur par copie
	DechetTraiteCompostable(const DechetTraiteCompostable& de) : DechetTraite(de) {};
};

