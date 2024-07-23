#pragma once
#include<string.h>
#include"Compteur.h"
#include<iostream>
using namespace std;
class Dechet
{

public:

	enum Materiel { CARTON = 0, BOUTEILLE = 1, PLASTIQUE = 2, METAL = 3, BOIS = 4, NOURRITURE = 5, VEGETAL = 6, PAPIER = 7, STYROFOAM = 8, INCONNU = 9 }; // si c la bonne maniere de le faire

	//construceur
	Dechet(void) : Dechet(0, "", 0, "", INCONNU, 0, 0, 0) {};
	//destrueur
	~Dechet();
	//constructeur par copie
	Dechet(const Dechet& dechet);

	//Methode

	int getPoids(void) const { return poids; }
	int getId(void) const { return id; }
	string getDescription(void) const { return description; }
	int getType(void) const { return type; }
	string getCouleur(void) const { return couleur; }
	Materiel getMateriel(void) const { return materiel; }
	int getPurete(void) const { return purete; }
	bool estEnStyromousse(void) const { return styromousse; }
	bool estRigide(void) const { return rigide; }

	friend ostream& operator<< (ostream& out, Dechet const& dechet);
protected:
	//constructeur
	Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide);
	Dechet(int poids, string description) : Dechet(poids, description, 0, "", INCONNU, 0, 0, 0) {};


private:
	//attribut
	int poids;
	int id;
	string description;
	int type;
	string couleur;
	Materiel materiel;
	int purete;
	bool styromousse;
	bool rigide;
	static int idCourant;

	//methode
	void setPoids(int poids);
	void setDescription(string description);
	void setType(int type);
	void setCouleur(string couleur);
	void setPurete(int purete);


};




