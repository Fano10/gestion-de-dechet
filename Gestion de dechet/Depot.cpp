#include"Depot.h"

Depot::Depot() {
	Compteur::ajouterConstructeur();
	totalIDTCompostable = 0;
	totalIDTNonRecyclable = 0;
	totalIDTRecyclable = 0;
}

Depot::Depot(const Depot& depot) {
	Compteur::ajouterConstructeurCopie();
	this->totalIDTCompostable = depot.totalIDTCompostable;
	this->totalIDTRecyclable = depot.totalIDTRecyclable;
	this->totalIDTNonRecyclable = depot.totalIDTNonRecyclable;
}

CamionBleu* Depot::getCamionBleu() {
	CamionBleu* camion = new CamionBleu();
	return camion;
}

CamionVert* Depot::getCamionVert() {
	CamionVert* camion = new CamionVert();
	return camion;
}
CamionBrun* Depot::getCamionBrun() {
	CamionBrun* camion = new CamionBrun();
	return camion;
}

void Depot::depotDechetsTraites(CamionBleu* camion) {
	totalIDTRecyclable = totalIDTRecyclable + (*camion).viderCamion();
	delete camion;
	camion = NULL;
}

void Depot::depotDechetsTraites(CamionBrun* camion) {
	totalIDTCompostable = totalIDTCompostable + (*camion).viderCamion();
	delete camion;
	camion = NULL;
}

void Depot::depotDechetsTraites(CamionVert* camion) {
	totalIDTNonRecyclable = totalIDTNonRecyclable + (*camion).viderCamion();
	delete camion;
	camion = NULL;
}

ostream& operator<<(ostream& out, Depot const& depot) {
	out << "--DEPOT--" << endl;
	out << "totalIDTRecyclable    : " << depot.totalIDTRecyclable << endl;
	out << "totalIDTNonRecyclable : " << depot.totalIDTNonRecyclable << endl;
	out << "totalIDTCompostable   : " << depot.totalIDTCompostable << endl;
	return out;
}