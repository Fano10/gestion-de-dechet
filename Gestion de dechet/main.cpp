#include<iostream>
#include"list"
#include"Dechet.h"
#include"UQAC.h"
#include"ChargementDechet.h"
#include"DechetTraiteCompostable.h"
#include"CamionBrun.h"
#include"Depot.h"
#include"Operation1.h"
#include"UsineTraitement.h"
#include"GenerateurSequenceOperations.h"
#include"SequenceOperations.h"


using namespace std;

void laboratoire2();
void afficherInformation();

int main(void) {

	laboratoire2();
	afficherInformation();

	return 0;
}

/*
void laboratoire2() {
	ChargementDechet* chargement = UQAC::getChargementDechets();
	cout << chargement->getDechet()[15];

	DechetTraiteCompostable* dc = new DechetTraiteCompostable(&chargement->getDechet()[15]);
	delete chargement;
	cout << *(dc->getDechet());

	CamionBrun * camionBrun = new CamionBrun();
	bool conf = camionBrun->ajouterDechet(dc);

	Depot depot;
	depot.depotDechetsTraites(camionBrun);
	cout << depot <<endl;

	Dechet* dechetOP = new Dechet();
	Operation* operation = new Operation1();
	conf = operation->effectuerOperation(dechetOP);
	cout << conf << endl;
	delete dechetOP;
	delete operation;
}
*/

void laboratoire2() {

	ChargementDechet* chargement = UQAC::getChargementDechets();

	UsineTraitement* usineTraitement = new UsineTraitement();
	GenerateurSequenceOperations gso;
	usineTraitement->chargerOperation(gso.genererSequence(0,usineTraitement));
	usineTraitement->demarrerTraitements(chargement);
	delete usineTraitement;
}

void afficherInformation() {
	cout << endl << endl;
	cout << endl << "-------------------------------------" << endl;
	cout << "Nombre de constructeur: " << Compteur::getNbConstructeur() << endl;
	cout << "Nombre de constructeur par copie: " << Compteur::getNbConstructeurCopie() << endl;
	cout << "Nombre de destructeur: " << Compteur::getNbDestructeurs() << endl;
}