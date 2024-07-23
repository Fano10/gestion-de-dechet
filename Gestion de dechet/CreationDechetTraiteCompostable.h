#pragma once
#include"OperationTraitement.h"

class CreationDechetTraiteCompostable :
	public OperationTraitement {

public:
	//constructeur
	CreationDechetTraiteCompostable(UsineTraitement* usineTraitement) :OperationTraitement(usineTraitement) {};
	CreationDechetTraiteCompostable() :OperationTraitement() {};
	//destructeur
	~CreationDechetTraiteCompostable() {};
	//constructeur par cope
	CreationDechetTraiteCompostable(const CreationDechetTraiteCompostable& ot) : OperationTraitement(ot) {};
	// methode
	bool effectuerOperation(Dechet* dechet);
};
