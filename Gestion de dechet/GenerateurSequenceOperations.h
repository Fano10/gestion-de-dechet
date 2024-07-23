#pragma once

#include"SequenceOperations.h"
#include"UsineTraitement.h"
#include"Compteur.h"
#include"CreationDechetTraiteCompostable.h"
#include"CreationDechetTraiteNonRecyclable.h"
#include"CreationDechetTraiteRecyclable.h"

class GenerateurSequenceOperations {

private:
	SequenceOperations* genererSequence1(UsineTraitement* usineTraitement);
	SequenceOperations* genererSequence0(UsineTraitement* usineTraitement);
public:
	//constructeur
	GenerateurSequenceOperations() { Compteur::ajouterConstructeur(); }

	//destructeur
	~GenerateurSequenceOperations() { Compteur::ajouterDestructeur(); }

	//constructeur par copie

	GenerateurSequenceOperations(const GenerateurSequenceOperations& cp) { Compteur::ajouterConstructeurCopie(); }

	// methode
	SequenceOperations* genererSequence(int id, UsineTraitement* usineTraitement);

};


