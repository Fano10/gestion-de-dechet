#include"Operation.h"


Operation::Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse) {
	Compteur::ajouterConstructeur();
	this->operationSuivanteTrue = operationSuivanteTrue;
	this->operationSuivanteFalse = operationSuivanteFalse;
}

Operation::~Operation(void) {
	Compteur::ajouterDestructeur();
	operationSuivanteTrue = NULL;
	operationSuivanteFalse = NULL;

}

Operation::Operation(const Operation& operation) {
	Compteur::ajouterConstructeurCopie();
	this->operationSuivanteTrue = new Operation(*operation.operationSuivanteTrue);
	this->operationSuivanteFalse = new Operation(*operation.operationSuivanteFalse);
}

bool Operation::effectuerOperation(Dechet* dechet) {
	return true;
}

Operation* Operation::getOperationSuivante(bool choix) {
	if (choix == true) {
		return operationSuivanteTrue;
	}
	else {
		return operationSuivanteFalse;
	}
}