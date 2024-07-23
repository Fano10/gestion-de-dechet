#include"UsineTraitement.h"



UsineTraitement::UsineTraitement() {
	Compteur::ajouterConstructeur();
	this->sequenceOperations = new SequenceOperations();
	this->camionBleu = new CamionBleu();
	this->camionVert = new CamionVert();
	this->camionBrun = new CamionBrun();
}

UsineTraitement::~UsineTraitement() {
	Compteur::ajouterDestructeur();
	if (sequenceOperations != NULL) {
		delete sequenceOperations;
	}

	this->depot.depotDechetsTraites(this->camionBleu);
	this->depot.depotDechetsTraites(this->camionVert);
	this->depot.depotDechetsTraites(this->camionBrun);
	Log::i(depot);// Journaliser le depot

}

UsineTraitement::UsineTraitement(const UsineTraitement& ut) {
	Compteur::ajouterConstructeurCopie();
	this->sequenceOperations = new SequenceOperations();
	this->camionBleu = new CamionBleu();
	this->camionVert = new CamionVert();
	this->camionBrun = new CamionBrun();
}

void UsineTraitement::Log::i(string info) {
	cout << info << endl;
}

void UsineTraitement::Log::i(Dechet const& dechet) {
	cout << dechet << endl;
}

void UsineTraitement::Log::i(Depot const& depot) {
	cout << depot << endl;
}

void UsineTraitement::preOperation() {
	Log::i("PREOPERATION");
}

void UsineTraitement::postOperation() {
	Log::i("POSTOPERATIO\n");
}

void UsineTraitement::demarrerTraitements(ChargementDechet* chargement) {

	list<Dechet*>::iterator it;
	it = chargement->getDechet()->begin();
	
	while (it != chargement->getDechet()->end()) {
		Log::i(**it); // Journaliser le dechet
		traiterDechet(*it); // Appeler la methode traiterDechet
		it++;
	}
	delete chargement;// supprime le chargement
	Log::i(depot);// Journaliser le depot
}

void UsineTraitement::traiterDechet(Dechet* dechet) {
	Operation* courante = sequenceOperations->getOperationDemarrage();// recuperer l'operationDemarrage();
	bool reponseOperation;
	preOperation();
	do {
		
		reponseOperation = courante->effectuerOperation(dechet); // effectuer l'operation de l'operation courante
		////
		courante = courante->getOperationSuivante(reponseOperation);

	} while (courante != NULL);
	postOperation();
}

void UsineTraitement::creerDechetTraiteRecyclable(Dechet* dechet) {

	DechetTraiteRecyclable* dechetTraiteRecyclable = new DechetTraiteRecyclable(dechet);
	bool place = camionBleu->ajouterDechet(dechetTraiteRecyclable);
	if (!place) {
		depot.depotDechetsTraites(camionBleu);
		camionBleu = depot.getCamionBleu();
		place = camionBleu->ajouterDechet(dechetTraiteRecyclable);
	}
	Log::i("AJOUT DTR: " + to_string(dechet->getId()));
}

void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet) {
	DechetTraiteNonRecyclable* dechetTraiteNonRecyclable = new DechetTraiteNonRecyclable(dechet);
	bool place = camionVert->ajouterDechet(dechetTraiteNonRecyclable);
	if (!place) {
		depot.depotDechetsTraites(camionVert);
		camionVert = depot.getCamionVert();
		place = camionVert->ajouterDechet(dechetTraiteNonRecyclable);
	}
	Log::i("AJOUT DTNR: " + to_string(dechet->getId()));
}

void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet) {

	DechetTraiteCompostable* dechetTraiteCompostable = new DechetTraiteCompostable(dechet);
	bool place = camionBrun->ajouterDechet(dechetTraiteCompostable);
	if (!place) {
		depot.depotDechetsTraites(camionBrun);
		camionBrun = depot.getCamionBrun();
		place = camionBrun->ajouterDechet(dechetTraiteCompostable);
	}
	Log::i("AJOUT DTC: " + to_string(dechet->getId()));
}