#include "UniteDeRecherche.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

UniteDeRecherche::UniteDeRecherche()
{
    //ctor
}

UniteDeRecherche::UniteDeRecherche(string designation, float surface)
{
    this->designation = designation;
    this->surface = surface;

}

void UniteDeRecherche::AjouterProjet(Projet* p)
{
    try{
        this->projets.push_back(p);
    } catch(const exception& ex) {
    cerr << "Erreur : " << ex.what() << endl;
    }
}

void UniteDeRecherche::ModifierProjet(Projet* p)
{
    cin >> p;


}

void UniteDeRecherche::SupprimerProjet(Projet* p)
{
    for(int i=0; i < this->projets.size() ; i++)
        {
        if(this->projets[i]->getReferenceProjet() == p->getReferenceProjet()){
            this->projets.erase(this->projets.begin()+i);
        }
    }

}

void UniteDeRecherche::AjouterChercheur(Chercheur* c)
{
    this->chercheurs.push_back(c);

}

void UniteDeRecherche::ModifierChercheur(Chercheur*)
{

}

void UniteDeRecherche::SupprimerChercheur (Chercheur* c)
{
    for(int i=0; i < this->chercheurs.size() ; i++){
        if(this->chercheurs[i]->getCarteIdentite() == c->getCarteIdentite()){
            this->chercheurs.erase(this->chercheurs.begin()+i);
        }
    }
}




void UniteDeRecherche::ListerProjets()
{

    cout << right << setw(15) << "Reference" << setw(15) << "Titre" << setw(15) << "Designation" << setw(20) << "Date Debut" << setw(20) << "Date Fin" << endl;
    cout << setfill('-') << setw(90) << "" << setfill(' ') << endl;


    for(int i=0; i < this->projets.size() ; i++){
        cout << this->projets[i];
    }

}

void UniteDeRecherche::ListerChercheur()
{
    cout << right << setw(15) << "ID" << setw(15) << "Nom" << setw(15) << "Prenom" << endl;
    cout << setfill('-') << setw(90) << "" << setfill(' ') << endl;

    for(int i=0; i < this->chercheurs.size() ; i++){
        cout << this->chercheurs[i] << endl;
    }

}


ostream& operator<<(ostream& o, UniteDeRecherche& u){
    o << u.designation << " - " << u.surface;
    return o;

}

istream& operator>>(istream& i, UniteDeRecherche& u)
{
    cout << "Saisir la Designation de l'unite de recherche : ";
    i >> u.designation;
    cout << "Saisir la surface de l'unite de recherche : ";
    i >> u.surface;

    return i;
}

UniteDeRecherche::UniteDeRecherche(const UniteDeRecherche& autre)
{
    this->designation = autre.designation;
    this->surface = autre.surface;
    this->projets = autre.projets;
    this->chercheurs = autre.chercheurs;
}

Projet* UniteDeRecherche::ObtenirProjet(int id)
{
    for (int i=0 ; i<this->projets.size() ; i++){
        if(this->projets[i]->getReferenceProjet() == id){
            return this->projets[i];
        }
    }

}

Chercheur* UniteDeRecherche::ObtenirChercheur(int id)
{
    for (int i=0 ; i<this->chercheurs.size() ; i++){
        if(this->chercheurs[i]->getCarteIdentite() == id){
            return this->chercheurs[i];
        }
    }
}







UniteDeRecherche::~UniteDeRecherche()
{
    //dtor
}
