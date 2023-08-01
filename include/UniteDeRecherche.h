#ifndef UNITEDERECHERCHE_H
#define UNITEDERECHERCHE_H
#include <string>
#include <vector>
#include <Projet.h>
#include <Chercheur.h>
#include <ostream>
#include <istream>

using namespace std;

class UniteDeRecherche
{
    string designation;
    float surface;
    vector<Projet*> projets;
    vector<Chercheur*> chercheurs;



    public:
        UniteDeRecherche();
        UniteDeRecherche(string , float);
        UniteDeRecherche(const UniteDeRecherche&);
        virtual ~UniteDeRecherche();
        friend ostream& operator<<(ostream&, UniteDeRecherche&);
        friend istream& operator>>(istream&, UniteDeRecherche&);
        void AjouterProjet(Projet*);
        void ModifierProjet(Projet*);
        void SupprimerProjet(Projet*);
        Projet* ObtenirProjet(int);
        void AjouterChercheur(Chercheur*);
        void ModifierChercheur(Chercheur*);
        void SupprimerChercheur(Chercheur*);
        Chercheur* ObtenirChercheur(int);
        void ListerProjets();
        void ListerChercheur();


};

#endif // UNITEDERECHERCHE_H
