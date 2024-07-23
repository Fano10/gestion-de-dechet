#pragma once

#include"Dechet.h"
#include"Compteur.h"

class Operation {

private:
	Operation* operationSuivanteTrue;
	Operation* operationSuivanteFalse;

public:
	//constructeur
	Operation() :Operation(NULL, NULL) {};
	Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);

	//destrucateur
	virtual ~Operation();

	// construceur par copie
	Operation(const Operation& operation);

	// methode
	virtual bool effectuerOperation(Dechet* dechet);
	Operation* getOperationSuivante(bool choix);
protected:
	Operation(Operation* operationSuivant) :Operation(operationSuivant, operationSuivant) {};

};
