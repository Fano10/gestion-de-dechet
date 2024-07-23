#pragma once
#include"Operation.h"

class Operation2 :
	public Operation {

public:
	//constructeur
	Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :Operation(operationSuivanteTrue, operationSuivanteFalse) {};
	Operation2() :Operation(NULL, NULL) {};
	bool effectuerOperation(Dechet* dechet);

	//destructeur
	~Operation2() {};
	//Constructeur par copie

	Operation2(Operation2 const& op) : Operation(op) {};

};
