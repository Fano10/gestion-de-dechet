#pragma once

#include"Operation.h"

class Operation3 :
	public Operation {

public:
	//constructeur
	Operation3(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :Operation(operationSuivanteTrue, operationSuivanteFalse) {};
	Operation3() :Operation(NULL, NULL) {};
	bool effectuerOperation(Dechet* dechet);

	//destructeur
	~Operation3() {};

	//Constructeur par copie

	Operation3(Operation3 const& op) :Operation(op) {};

};

