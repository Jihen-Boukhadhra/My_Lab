#include "Rapport_Formule.h"
#include <iostream>

Rapport_Formule::Rapport_Formule()
{
    //ctor
}
Rapport_Formule::Rapport_Formule(int ref_rapport, Date* date_rapport , bool etat)
{
    this->ref_rapport=ref_rapport;
    this->date_rapport=date_rapport;
    this->etat=etat;
}

Rapport_Formule::~Rapport_Formule()
{
    //dtor
}

Rapport_Formule::Rapport_Formule(const Rapport_Formule& r )
{
    this->ref_rapport=r.ref_rapport;
    this->date_rapport=r.date_rapport;
    this->etat=r.etat;
}

ostream& operator<<(ostream& o, Rapport_Formule& r)
{
 o << r.ref_rapport<< " - " << r.date_rapport<< " - " << r.etat << endl;
    return o;
}
istream& operator>>(istream& i, Rapport_Formule& r)
{
    cout << "Saisir La reference du rapport: ";
    i >> r.ref_rapport;
    cout << "Saisir la date du rapport: ";
    i >> r.date_rapport;
    cout << " Saisir l'etat :";
    i >> r.etat;
    return i;
}

int Rapport_Formule::getRefRapport()
{
    return this->ref_rapport;

}

