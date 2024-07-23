#pragma once
#include"OperationTraitement.h"

class CreationDechetTraiteRecyclable :
	public OperationTraitement {

public:
	//constructeur
	CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement) :OperationTraitement(usineTraitement) {};
	CreationDechetTraiteRecyclable() :OperationTraitement() {};
	//destructeur

	~CreationDechetTraiteRecyclable() {};
	//constructeur par cope
	CreationDechetTraiteRecyclable(const CreationDechetTraiteRecyclable& ot) :OperationTraitement(ot) {};
	// methode
	bool effectuerOperation(Dechet* dechet);
};
