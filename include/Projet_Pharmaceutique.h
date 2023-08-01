#ifndef PROJET_PHARMACEUTIQUE_H
#define PROJET_PHARMACEUTIQUE_H
#include <Date.h>
#include <Projet.h>
#include <string>
#include <ostream>
#include <istream>
#include <Pharmacien_Chercheur.h>
#include <set>
using namespace std;

class Projet_Pharmaceutique : public Projet
{

    string * pharmacies;
    int nb_pharmacies;
    set<Pharmacien_Chercheur*> pharmaciens;


    public:
        Projet_Pharmaceutique();
        Projet_Pharmaceutique(int , string , string , Date* , Date*  , int , string* );
        virtual ~Projet_Pharmaceutique();
        Projet_Pharmaceutique(const Projet_Pharmaceutique& other);
        friend ostream& operator<<(ostream&, Projet_Pharmaceutique&);
        friend istream& operator>>(istream&, Projet_Pharmaceutique&);
        friend ostream& operator<<(ostream&, Projet_Pharmaceutique*);
        friend istream& operator>>(istream&, Projet_Pharmaceutique*);
        void AjouterPharmacienChercheur(Pharmacien_Chercheur*);
        void SupprimerPharmacienChercheur(Pharmacien_Chercheur*);
        void listerPharmacienChercheurs();
        int getTotalEmployee();
};

#endif // PROJET_PHARMACEUTIQUE_H
