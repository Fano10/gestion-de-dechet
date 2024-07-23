#pragma once
#include"Operation.h"

class Operation5 :
	public Operation {

public:
	//constructeur
	Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :Operation(operationSuivanteTrue, operationSuivanteFalse) {};
	Operation5() :Operation(NULL, NULL) {};
	bool effectuerOperation(Dechet* dechet);

	//destructeur
	~Operation5() {};

	//Constructeur par copie

	Operation5(Operation5 const& op) :Operation(op) {};

};

