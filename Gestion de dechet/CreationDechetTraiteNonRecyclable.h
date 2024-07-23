#pragma once
#include"OperationTraitement.h"

class CreationDechetTraiteNonRecyclable :
	public OperationTraitement {

public:
	//constructeur
	CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement) :OperationTraitement(usineTraitement) {};
	CreationDechetTraiteNonRecyclable() :OperationTraitement() {};
	//destructeur
	~CreationDechetTraiteNonRecyclable() {};
	//constructeur par cope
	CreationDechetTraiteNonRecyclable(const CreationDechetTraiteNonRecyclable& ot) :OperationTraitement(ot) {};
	// methode
	bool effectuerOperation(Dechet* dechet);
};
