#include "Dechet.h"

int Dechet::idCourant = 0;

//constructeur

Dechet::Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide) {
	Compteur::ajouterConstructeur();
	id = idCourant;
	idCourant = idCourant + 1;
	setPoids(poids);
	setDescription(description);
	setType(type);
	setCouleur(couleur);
	setPurete(purete);
	this->materiel = materiel;
	this->styromousse = estEnStyromousse;
	this->rigide = rigide;
}

//destructeur
Dechet::~Dechet() {
	Compteur::ajouterDestructeur();
}

//constructeur par copie

Dechet::Dechet(const Dechet& dechet) {
	Compteur::ajouterConstructeurCopie();
	this->poids = dechet.poids;
	this->id = dechet.id;
	this->description = dechet.description;
	this->type = dechet.type;
	this->couleur = dechet.couleur;
	this->materiel = dechet.materiel;
	this->purete = dechet.purete;
	this->styromousse = dechet.styromousse;
	this->rigide = dechet.rigide;
}

void Dechet::setPoids(int poids) {
	if (poids > 0 && poids <= 100) {
		this->poids = poids;
	}
	else {
		this->poids = 0; // par defaut
	}
}
void Dechet::setDescription(string description) {
	if (description.length() > 3) {
		this->description = description;
	}
	else {
		this->description = "Quelque chose";
	}
}
void Dechet::setType(int type) {
	if (type > 0 && type <= 7 && this->materiel == PLASTIQUE) {

		this->type = type;
	}
	else {
		this->type = 0;
	}

}
void Dechet::setCouleur(string couleur) {
	if (couleur == "brun" || couleur == "vert") {
		this->couleur = couleur;
	}
	else {
		this->couleur = "inconnu";
	}
}
void Dechet::setPurete(int purete) {
	if (purete > 1 && purete <= 100) {
		this->purete = purete;
	}
	else {
		this->purete = 1;
	}
}

ostream& operator<<(ostream& out, Dechet const& dechet)
{
	out << "------------------------------------------" << endl;
	out << "id          : " << dechet.id << endl;
	out << "poids       : " << dechet.poids << endl;
	out << "description : " << dechet.description << endl;
	out << "type        : " << dechet.type << endl;
	out << "couleur     : " << dechet.couleur << endl;
	out << "materiel    : " << dechet.materiel << endl;
	out << "purete      : " << dechet.purete << endl;
	out << "styromousse : " << dechet.styromousse << endl;
	out << "rigide      : " << dechet.rigide << endl;
	out << "------------------------------------------" << endl;
	return out;
}
