#pragma once
#include"Operation.h"

class Operation4 :
	public Operation {

public:
	//constructeur
	Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) :Operation(operationSuivanteTrue, operationSuivanteFalse) {};
	Operation4() :Operation(NULL, NULL) {};
	bool effectuerOperation(Dechet* dechet);

	//destructeur
	~Operation4() {};

	//Constructeur par copie

	Operation4(Operation4 const& op) : Operation(op) {};


};

