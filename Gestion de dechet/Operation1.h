#pragma once
#include"Operation.h"

class Operation1 :
	public Operation {

public:
	//constructeur
	Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :Operation(operationSuivanteTrue, operationSuivanteFalse) {};
	Operation1() :Operation(NULL, NULL) {};
	bool effectuerOperation(Dechet* dechet);

	//destructeur
	~Operation1() {};

	//Constructeur par copie

	Operation1(Operation1 const& op) :Operation(op) {};

};
