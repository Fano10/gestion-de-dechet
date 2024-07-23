#include"CreationDechetTraiteRecyclable.h"

bool CreationDechetTraiteRecyclable::effectuerOperation(Dechet* dechet) {
	OperationTraitement::creerDechetTraiteRecyclable(dechet);
	return true;
}