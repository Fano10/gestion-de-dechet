#include "Camion.h"

Camion::Camion(int maxCapacite) {
	Compteur::ajouterConstructeur();
	this->maxCapacite = maxCapacite;
	this->capacite = 0;

}

Camion::Camion(const Camion& camion) {
	Compteur::ajouterConstructeurCopie();
	this->maxCapacite = camion.maxCapacite;
	this->capacite = camion.capacite;
}

bool Camion::ajouterDechet(DechetTraite* dechetTraite) {
	if (capacite == maxCapacite) {
		return false;
	}
	else {
		this->pileDechets.push(dechetTraite);
		this->capacite = this->capacite + 1;
		return true;
	}

}

int Camion::viderCamion(void) {
	for (int i = 0; i < this->capacite; i++) {
		delete this->pileDechets.front(); // supprime d'abords le dechet traite pointe par ma pile avant de supprimer le pointeur de ma pile
		this->pileDechets.pop();//
	}
	return this->capacite;
}