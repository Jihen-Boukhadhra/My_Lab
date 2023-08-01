#include "Projet_Pharmaceutique.h"
#include <iostream>
#include <set>


using namespace std;

Projet_Pharmaceutique::Projet_Pharmaceutique()
{
    //ctor
}

Projet_Pharmaceutique::Projet_Pharmaceutique(int referenceProjet, string Titre, string DesignationMed, Date* Date_debut, Date* Date_fin, int nb_pharmacies , string * pharmacies): Projet(referenceProjet, Titre , DesignationMed, Date_debut , Date_fin)
{
    pharmacies = new string[5];
    this->nb_pharmacies = nb_pharmacies;
}

Projet_Pharmaceutique::~Projet_Pharmaceutique()
{
    delete [] pharmacies ;
}

Projet_Pharmaceutique::Projet_Pharmaceutique(const Projet_Pharmaceutique& p ):Projet(p)
{
    pharmacies=new string[5];
    this->nb_pharmacies = p.nb_pharmacies;
    for(int i=0 ; i<4; i++)
    {
        pharmacies[i]=p.pharmacies[i] ;   }
}

ostream& operator<<(ostream& o, Projet_Pharmaceutique& pp)
{
    Projet& p = static_cast<Projet&>(pp);
    o << p;
    for (int i = 0; i < pp.nb_pharmacies; i++) {
        o << pp.pharmacies[i] << " ";
        if (i != pp.nb_pharmacies - 1) {
            o << ", ";
        }
    }
    return o;

}

istream& operator>>(istream& i, Projet_Pharmaceutique& pp)
{
    Projet& p = static_cast<Projet&>(pp);
    i >> p;
    cout << "Saisir le nombre de pharmacies : ";
    i >> pp.nb_pharmacies;
    pp.pharmacies = new string[pp.nb_pharmacies];
    for (int j = 0; j < pp.nb_pharmacies; j++)
    {
        cout << "Saisir le nom de la pharmacie " << j+1 << " : ";
        i >> pp.pharmacies[j];
    }
    return i;
}

ostream& operator<<(ostream& o, Projet_Pharmaceutique* pp)
{
    Projet* p = static_cast<Projet*>(pp);
    o << p;
    for (int i = 0; i < pp->nb_pharmacies; i++) {
        o << pp->pharmacies[i] << " ";
        if (i != pp->nb_pharmacies - 1) {
            o << ", ";
        }
    }
    return o;

}

istream& operator>>(istream& i, Projet_Pharmaceutique* pp)
{
    Projet* p = static_cast<Projet*>(pp);
    i >> p;
    cout << "Saisir le nombre de pharmacies : ";
    i >> pp->nb_pharmacies;
    pp->pharmacies = new string[pp->nb_pharmacies];
    for (int j = 0; j < pp->nb_pharmacies; j++)
    {
        cout << "Saisir le nom de la pharmacie " << j+1 << " : ";
        i >> pp->pharmacies[j];
    }
    return i;
}
void Projet_Pharmaceutique::AjouterPharmacienChercheur(Pharmacien_Chercheur* p)
{
    this->pharmaciens.insert(p);
}

void Projet_Pharmaceutique::SupprimerPharmacienChercheur(Pharmacien_Chercheur* p)
{
    this->pharmaciens.erase(p);
}




void Projet_Pharmaceutique::listerPharmacienChercheurs()
{
    for (auto it = this->pharmaciens.begin(); it != this->pharmaciens.end(); ++it) {
        cout << (*it);

    }

}




int Projet_Pharmaceutique::getTotalEmployee()
{
    return 0;
}




