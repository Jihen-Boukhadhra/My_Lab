#include "Analyse_Formule.h"
#include <iostream>

Analyse_Formule::Analyse_Formule()
{
    //ctor
}

Analyse_Formule::Analyse_Formule(int ref_analyse, Date* date_analyse, string description)
{
    this->ref_analyse =ref_analyse;
    this->date_analyse = date_analyse;
    this->description = description;
}

Analyse_Formule::~Analyse_Formule()
{
    //dtor
}

Analyse_Formule::Analyse_Formule(const Analyse_Formule& a)
{
    this->ref_analyse = a.ref_analyse;
    this->date_analyse = a.date_analyse;
    this->description = a.description;
}

ostream& operator<<(ostream& o, Analyse_Formule& a)
{
 o << a.ref_analyse<< " - " << a.date_analyse<< " - " << a.description << endl;
    return o;

}
istream& operator>>(istream& i, Analyse_Formule& a)
{
    cout << "Saisir La reference de l'analyse: ";
    i >> a.ref_analyse;
    cout << "Saisir la date de l'analyse: ";
    i >> a.date_analyse;
    cout << " Saisir la description :";
    i >> a.description ;

    return i;
}

int Analyse_Formule::getReferenceAnalyse()
{
    return this->ref_analyse;
}
