#pragma once
#include"Operation.h"

class Operation6 :
	public Operation {

public:
	//constructeur
	Operation6(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :Operation(operationSuivanteTrue, operationSuivanteFalse) {};
	Operation6() :Operation(NULL, NULL) {};
	bool effectuerOperation(Dechet* dechet);

	//destructeur
	~Operation6() {};

	//Constructeur par copie

	Operation6(Operation6 const& op) :Operation(op) {};

};
