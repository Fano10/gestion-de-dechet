#include"DechetTraite.h"

DechetTraite::DechetTraite() {
	this->dechet = NULL;
	Compteur::ajouterConstructeur();
}

DechetTraite::DechetTraite(Dechet* dechet) {
	this->dechet = new Dechet(*dechet); // est ce que c'est vraiment new?
	Compteur::ajouterConstructeur();
}

DechetTraite::~DechetTraite() {
	delete this->dechet;
	Compteur::ajouterDestructeur();
}

DechetTraite::DechetTraite(const DechetTraite& dechetTraite) {
	this->dechet = new Dechet(*(dechetTraite.dechet));
	Compteur::ajouterConstructeurCopie();
}