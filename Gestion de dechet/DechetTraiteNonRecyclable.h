#pragma once
#include"DechetTraite.h"
using namespace std;

class DechetTraiteNonRecyclable :
	public DechetTraite
{
public:
	//Constructeur
	DechetTraiteNonRecyclable() :DechetTraite() {};
	DechetTraiteNonRecyclable(Dechet* dechet) : DechetTraite(dechet) {};

	//destructeur
	~DechetTraiteNonRecyclable() {};

	//constructeur par copie
	DechetTraiteNonRecyclable(const DechetTraiteNonRecyclable& de) :DechetTraite(de) {};
};