#pragma once

#include"Operation.h"
#include"UsineTraitement.h"
#include"Compteur.h"

class OperationTraitement :
	public Operation {

private:
	UsineTraitement* usineTraitement;

public:
	//constructeur
	OperationTraitement() :Operation() { usineTraitement = NULL; }
	OperationTraitement(UsineTraitement* usineTraitement) :Operation() { this->usineTraitement = usineTraitement; }

	//destructeur
	virtual ~OperationTraitement() {};

	//constructeur par copie

	OperationTraitement(const OperationTraitement& Ot) :Operation(Ot) { usineTraitement = NULL; }

	//methode
	virtual bool effectuerOperation(Dechet* dechet) { return true;  }

protected:
	void creerDechetTraiteRecyclable(Dechet* dechet) { usineTraitement->creerDechetTraiteRecyclable(dechet); }
	void creerDechetTraiteNonRecyclable(Dechet* dechet) { usineTraitement->creerDechetTraiteNonRecyclable(dechet); }
	void creerDechetTraiteCompostable(Dechet* dechet) { usineTraitement->creerDechetTraiteCompostable(dechet); }


};
