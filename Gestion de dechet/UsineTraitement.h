#pragma once
#include<iostream>
#include"string"
#include"list"
#include"Compteur.h"
#include"SequenceOperations.h"
#include"Depot.h"
#include"Camion.h"
#include"ChargementDechet.h"

using namespace std;
class UsineTraitement {

private:
	//attribut
	SequenceOperations* sequenceOperations;
	Depot depot;
	CamionBleu* camionBleu;
	CamionVert* camionVert;
	CamionBrun* camionBrun;

	//methode
	void preOperation();
	void postOperation();
	void creerDechetTraiteRecyclable(Dechet* dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
	

	//class interne
	class Log {
	public:
		static void i(string info);
		static void i(Dechet const& dechet);
		static void i(Depot const& depot);
	};
public:
	//constructeur
	UsineTraitement();

	//UsineTraitement()
	//destructeur

	~UsineTraitement();

	//constructeur par copie

	UsineTraitement(const UsineTraitement& ut);

	//methode
	void chargerOperation(SequenceOperations* sequenceOperations) { this->sequenceOperations = sequenceOperations; }
	void demarrerTraitements(ChargementDechet* chargement);

	///////////////////////
	void traiterDechet(Dechet* dechet);
	SequenceOperations* getSeq() const { return this->sequenceOperations; }
	////////////////////

	//friend
	friend class OperationTraitement;
};
