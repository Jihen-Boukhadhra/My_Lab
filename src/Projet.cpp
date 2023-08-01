#include "Projet.h"
#include "Date.h"
#include <iostream>
#include <iomanip>
#include <exception>

int Projet::total_projet = 0 ;

Projet::Projet()
{
    total_projet++ ;
}

Projet::Projet(int referenceProjet, string Titre, string DesignationMed, Date* Date_debut, Date* Date_fin)
{
    this->referenceProjet = referenceProjet;
    this->Titre = Titre;
    this->DesignationMed = DesignationMed;
    this->Date_debut = Date_debut;
    this->Date_fin = Date_fin;
    total_projet++;

}


int Projet::getReferenceProjet()
{
    return this->referenceProjet;
}

int Projet::getTotalProjet()
{
    return total_projet;
}

Projet::Projet(const Projet& autre)
{
    this->referenceProjet = autre.referenceProjet;
    this->Titre = autre.Titre;
    this->DesignationMed = autre.DesignationMed;
    this->Date_debut = autre.Date_debut;
    this->Date_fin = autre.Date_fin;
}



ostream& operator<<(ostream& o, Projet& p){
    cout << right << setw(15) << p.referenceProjet << setw(15) << p.Titre << setw(15) << p.DesignationMed << setw(15) << p.Date_debut << setw(15) << p.Date_fin << endl;
    return o;

}

ostream& operator<<(ostream& o, Projet* p){
    cout << right << setw(15) << p->referenceProjet << setw(15) << p->Titre << setw(15) << p->DesignationMed << setw(15) << p->Date_debut << setw(15) << p->Date_fin << endl;
    return o;

}


istream& operator>>(istream& i, Projet& p){
    cout << "Saisir la Reference de Projet : ";
    i >> p.referenceProjet;
    cout << "Saisir Titre projet : ";
    i >> p.Titre;
    cout << "Saisir Designation Med : ";
    i >> p.DesignationMed;
    cout << "Saisir Date Debut : ";
    i >> p.Date_debut;
    cout << "Saisir Date Fin : ";
    i >> p.Date_fin;

    return i;
}


istream& operator>>(istream& i, Projet* p){
    try{
    cout << "Saisir la Reference de Projet : ";
    i >> p->referenceProjet;
    cout << "Saisir Titre projet : ";
    i >> p->Titre;
    cout << "Saisir Designation Med : ";
    i >> p->DesignationMed;
    cout << "Saisir Date Debut : ";
    i >> p->Date_debut;
    cout << "Saisir Date Fin : ";
    i >> p->Date_fin;
    }catch(exception e){
        cout << e.what();
    }

    return i;
}



Projet::~Projet()
{
    total_projet--;
}
