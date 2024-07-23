#pragma once
#include"Compteur.h"
#include"list"
#include"Operation.h"
#include"Operation1.h"
#include"Operation2.h"
#include"Operation3.h"
#include"Operation4.h"
#include"Operation5.h"
#include"Operation6.h"

class SequenceOperations {

private:
	list <Operation*> listeOperations;
	Operation* operationDemarrage;

public:
	//constructeur
	SequenceOperations();
	//SequenceOperations();

	//destructeur
	~SequenceOperations();
	//constructeur par copie

	SequenceOperations(const SequenceOperations& sq);

	//methode
	SequenceOperations*  ajouterOperation(Operation* operation); // changer
	void definirOperationDemarrage(Operation* operation) { this->operationDemarrage = operation; }
	Operation* getOperationDemarrage()const { return operationDemarrage; }

};
