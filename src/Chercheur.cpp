#include "Chercheur.h"
#include <iostream>
#include <iomanip>


int Chercheur::total_chercheurs = 0;


Chercheur::Chercheur()
{
    total_chercheurs++;
}

Chercheur::Chercheur(long carte_identite, string nom , string prenom , Date* date_naissance )
{
    this->carte_identite = carte_identite;
    this->nom = nom;
    this->prenom = prenom;
    this->date_naissance = date_naissance;
    total_chercheurs++;
}

int Chercheur::getCarteIdentite()
{
    return this->carte_identite;
}

int Chercheur::getTotalChercheurs()
{
    return total_chercheurs;
}
Chercheur::Chercheur(const Chercheur& autre)
{
    this->carte_identite = autre.carte_identite;
    this->nom = autre.nom;
    this->prenom = autre.prenom;
}

ostream& operator<<(ostream& o, Chercheur& c){
    cout << right << setw(15) << c.carte_identite << setw(15) << c.nom << setw(15) << c.prenom;
    return o;

}


ostream& operator<<(ostream& o, Chercheur* c){
    cout << right << setw(15) << c->carte_identite << setw(15) << c->nom << setw(15) << c->prenom;
    return o;

}

istream& operator>>(istream& i, Chercheur& c){
    cout << "Saisir La carte d'identite : ";
    i >> c.carte_identite;
    cout << "Saisir Nom : ";
    i >> c.nom;
    cout << "Saisir Prenom : ";
    i >> c.prenom;

    return i;
}

istream& operator>>(istream& i, Chercheur* c){
    cout << "Saisir La carte d'identite : ";
    i >> c->carte_identite;
    cout << "Saisir Nom : ";
    i >> c->nom;
    cout << "Saisir Prenom : ";
    i >> c->prenom;

    return i;
}


Chercheur::~Chercheur()
{
    total_chercheurs--;
}
