#include"UQAC.h"

ChargementDechet* UQAC::getChargementDechets() {

	list<Dechet*>* listeDechet = new list<Dechet*>; // xD
	for (int i = 0; i < 5; i++) {
		listeDechet->push_back(new PlanteVerte()); // attention
		listeDechet->push_back(new FeuillePapier());
		listeDechet->push_back(new RestantNourriture());
		listeDechet->push_back(new SacChips());
		listeDechet->push_back(new QuelqueChose());
		listeDechet->push_back(new BouteilleBiere());
		listeDechet->push_back(new Chaise());
		listeDechet->push_back(new DechetMalConcu());
		listeDechet->push_back(new VerreCafe());
		listeDechet->push_back(new BoiteCarton());
	}

	ChargementDechet* chargement = new ChargementDechet(listeDechet);
	return chargement;
}