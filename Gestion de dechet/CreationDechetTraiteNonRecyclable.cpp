#include"CreationDechetTraiteNonRecyclable.h"

bool CreationDechetTraiteNonRecyclable::effectuerOperation(Dechet* dechet) {
	OperationTraitement::creerDechetTraiteNonRecyclable(dechet);
	return true;
}