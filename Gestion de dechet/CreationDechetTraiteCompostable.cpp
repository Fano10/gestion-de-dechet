#include"CreationDechetTraiteCompostable.h"

bool CreationDechetTraiteCompostable::effectuerOperation(Dechet * dechet) {
	OperationTraitement::creerDechetTraiteCompostable(dechet);
	return true;
}