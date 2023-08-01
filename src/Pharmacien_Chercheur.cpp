#include "Pharmacien_Chercheur.h"
#include <iostream>
#include "Date.h"


Pharmacien_Chercheur::Pharmacien_Chercheur()
{
    //ctor
}

Pharmacien_Chercheur::Pharmacien_Chercheur(long carte_identite, string nom, string prenom , Date* date_naissance , string grade ): Chercheur(carte_identite, nom , prenom , date_naissance)
{
    this->grade=grade;

}

Pharmacien_Chercheur::~Pharmacien_Chercheur()
{
    for (auto p : Analyses)
    {
        delete p;
    }
    Analyses.clear();

    for (auto p : Rapports)
    {
        delete p;
    }
    Rapports.clear();
}

Pharmacien_Chercheur::Pharmacien_Chercheur(const Pharmacien_Chercheur& other):Chercheur(other)
{
    grade = other.grade;

    // Create new copies of the objects pointed to by the pointers in the Analyses list
    for (auto p : other.Analyses)
    {
        Analyses.push_back(new Analyse_Formule(*p));
    }

    // Create new copies of the objects pointed to by the pointers in the Rapports list
    for (auto p : other.Rapports)
    {
        Rapports.push_back(new Rapport_Formule(*p));
    }
}

ostream& operator<<(ostream& o, Pharmacien_Chercheur& p)
{
    Chercheur* c=&p;
    o<<*c;
    o << p.grade <<endl;
    return o;

}

istream& operator>>(istream& i, Pharmacien_Chercheur& p)
{
    Chercheur*c = &p;
    i>>*c;
    cout << "Saisir grade : ";
    i >> p.grade;
    return i;
}

ostream& operator<<(ostream& o, Pharmacien_Chercheur* p)
{
    Chercheur* c = static_cast<Chercheur*>(p);
    o << c << " - " << p->grade << endl;

    return o;

}

istream& operator>>(istream& i, Pharmacien_Chercheur* p)
{
    Chercheur* c = static_cast<Chercheur*>(p);
    i >> c;
    cout << "Saisir Grade : ";
    i >> p->grade;

    return i;
}

void Pharmacien_Chercheur::AjouterAnalyse_Formule(Analyse_Formule* a )
{
     this->Analyses.push_back(a);
}

void Pharmacien_Chercheur::ModifierAnalyse_Formule(Analyse_Formule* a )
{

}

void Pharmacien_Chercheur::SupprimerAnalyse_Formule(Analyse_Formule* a)
{
    list<Analyse_Formule> ::iterator it;
    //.............
}

void Pharmacien_Chercheur::AjouterRapport_Formule(Rapport_Formule* r )
{
      this->Rapports.push_back(r);
}

void Pharmacien_Chercheur::ModifierRapport_Formule(Rapport_Formule* r )
{

}

void Pharmacien_Chercheur::SupprimerRapport_Formule(Rapport_Formule* r)
{

    list<Rapport_Formule> ::iterator it;
    //...........................
}

void Pharmacien_Chercheur::ListerAnalyse_Formule()
{
    for (auto it = this->Analyses.begin(); it != this->Analyses.end(); ++it) {
        Analyse_Formule* formule = *it;
        cout << *formule ;
    }
}

void Pharmacien_Chercheur::ListerRapport_Formule()
{
    for (auto it = this->Rapports.begin(); it != this->Rapports.end(); ++it) {
        Rapport_Formule* formule = *it;
        cout << *formule;
    }
}

int Pharmacien_Chercheur::getCarteIdentite()
{
    return this->carte_identite;
}





