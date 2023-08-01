#include "Date.h"
#include <iostream>


Date::Date()
{
    //ctor
}

Date::Date(int jour, int mois, int annee)
{
    this->jour = jour;
    this->mois = mois;
    this->annee = annee;

}



ostream& operator<<(ostream& o, Date& d){
    o << d.annee << "-" << d.mois << "-" << d.jour;
    return o;

}

istream& operator>>(istream& i, Date& d){
    cout << "Saisir l'annee : ";
    i >> d.annee;
    cout << "Saisir mois : ";
    i >> d.mois;
    cout << "Saisir Jour : ";
    i >> d.jour;

    return i;
}


ostream& operator<<(ostream& o, Date* d){
    o << d->annee << "-" << d->mois << "-" << d->jour;
    return o;

}

istream& operator>>(istream& i, Date* d){
    cout << "Saisir l'annee : ";
    i >> d->annee;
    cout << "Saisir mois : ";
    i >> d->mois;
    cout << "Saisir Jour : ";
    i >> d->jour;

    return i;
}



Date::~Date()
{
    //dtor
}
