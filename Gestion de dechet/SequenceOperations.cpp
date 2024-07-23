#include"SequenceOperations.h"

SequenceOperations::SequenceOperations() {
	Compteur::ajouterConstructeur();
	operationDemarrage = NULL;
}

SequenceOperations::~SequenceOperations() {
	Compteur::ajouterDestructeur();
	list<Operation*>::iterator it;
	it = this->listeOperations.begin();
	while (it != this->listeOperations.end()) {
		delete* it;
		it++;
	}
	this->operationDemarrage = NULL;
}
SequenceOperations::SequenceOperations(const SequenceOperations& op) {
	Compteur::ajouterConstructeurCopie();
	this->operationDemarrage = NULL;
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation) {

	this->listeOperations.push_back(operation);

	return this;
}
