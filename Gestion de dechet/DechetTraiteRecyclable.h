#pragma once
#include"DechetTraite.h"

class DechetTraiteRecyclable :
	public DechetTraite {

public:
	//construceut
	DechetTraiteRecyclable() :DechetTraite() {};
	DechetTraiteRecyclable(Dechet* dechet) :DechetTraite(dechet) {};

	//Destructeur
	~DechetTraiteRecyclable() {};

	//Contructeur par copie

	DechetTraiteRecyclable(const DechetTraiteRecyclable& de) :DechetTraite(de) {};
};

