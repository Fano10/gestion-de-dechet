#include"ChargementDechet.h"


ChargementDechet::ChargementDechet(void) {
	Compteur::ajouterConstructeur();

	this->listeDechets = NULL;
}


ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets) {
	Compteur::ajouterConstructeur();
	this->listeDechets = listeDechets;
	//supprime toute la valeur dans la liste ou dans la classe UQAC
}

ChargementDechet::~ChargementDechet(void) {
	Compteur::ajouterDestructeur();
	list <Dechet*>::iterator it;
	it = (*listeDechets).begin();
	for (it; it != (*listeDechets).end(); it++) {
		delete *it; // supprime l'adrresse de ma liste
	}
}

ChargementDechet::ChargementDechet(const ChargementDechet& dechet) {
	Compteur::ajouterConstructeurCopie();
	this->listeDechets = NULL;
}