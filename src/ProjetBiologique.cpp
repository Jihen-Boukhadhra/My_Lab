#include "ProjetBiologique.h"
#include "Projet.h"
#include "Date.h"
#include "Biologiste.h"
#include <string>
#include <ostream>
#include <istream>
#include <iostream>
#include <vector>
#include <Exception.h>



using namespace std;



ProjetBiologique::ProjetBiologique()
{
    //ctor
}


ProjetBiologique::ProjetBiologique(int referenceProjet, string Titre, string DesignationMed, Date* Date_debut, Date* Date_fin , string type): Projet(referenceProjet, Titre, DesignationMed, Date_debut, Date_fin)
{
    if(type != "Cellulaire" && type != "Chimique"){
        throw ProjetBiologiqueException("Type de Projet invalide");
    }
    this->type = type;
}

ProjetBiologique::ProjetBiologique(const ProjetBiologique& pb) : Projet(pb)
{
    if(type != "Cellulaire" || type != "Chimique"){
        throw ProjetBiologiqueException("Type de Projet invalide");
    }
    this->type = pb.type;

}


ostream& operator<<(ostream& o, ProjetBiologique& pb){
    Projet& p = static_cast<Projet&>(pb);
    o << p << " - " << pb.type << endl;
    return o;
}


istream& operator>>(istream& i, ProjetBiologique& pb){
    Projet& p = static_cast<Projet&>(pb);
    i >> p;
    cout << "Saisir la Type de Projet : ";
    i >> pb.type;

    return i;
}



ostream& operator<<(ostream& o, ProjetBiologique* pb){
    Projet* p = static_cast<Projet*>(pb);
    o << p << " - " << pb->type << endl;
    return o;
}


istream& operator>>(istream& i, ProjetBiologique* pb){
    Projet* p = static_cast<Projet*>(pb);
    i >> p;
    cout << "Saisir la Type de Projet : ";
    i >> pb->type;

    return i;
}


void ProjetBiologique::AjouterBiologiste(Biologiste* b)
{
    this->Biologistes.push_back(b);

}

void ProjetBiologique::SupprimerBiologiste(Biologiste* b)
{
    for(int i=0; i < this->Biologistes.size() ; i++){
        if(this->Biologistes[i]->getCarteIdentite() == b->getCarteIdentite()){
            this->Biologistes.erase(this->Biologistes.begin()+i);
        }
    }

}

void ProjetBiologique::ListerBiologiste()
{
    for(int i=0; i < this->Biologistes.size() ; i++){
        cout << this->Biologistes[i]->getCarteIdentite() << endl;
    }
}


int ProjetBiologique::getTotalEmployee()
{
    return this->Biologistes.size();
}


ProjetBiologique::~ProjetBiologique()
{
    //dtor
}
