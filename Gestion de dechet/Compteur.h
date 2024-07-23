#pragma once

class Compteur {

private:
	static int constructeur;
	static int constructeurCopie;
	static int destructeur;

public:
	//costructeur
	Compteur() {};

	//destructeur
	static inline void ajouterConstructeur() { constructeur = constructeur + 1; }
	static inline  void ajouterConstructeurCopie() { constructeurCopie = constructeurCopie + 1; }
	static inline  void ajouterDestructeur() { destructeur = destructeur + 1; }
	static inline  int getNbConstructeur() { return constructeur; }
	static inline  int getNbConstructeurCopie() { return constructeurCopie; }
	static inline  int getNbDestructeurs() { return destructeur; }
};
