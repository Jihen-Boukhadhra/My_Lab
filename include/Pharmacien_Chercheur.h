#ifndef PHARMACIEN_CHERCHEUR_H
#define PHARMACIEN_CHERCHEUR_H
#include <list>
#include <Chercheur.h>
#include "Rapport_Formule.h"
#include "Analyse_Formule.h"

#include <string>
#include <ostream>
#include <istream>

using namespace std;

class Pharmacien_Chercheur : public Chercheur
{
        string grade;
        list<Rapport_Formule *> Rapports;
        list<Analyse_Formule *> Analyses;
    public:
        Pharmacien_Chercheur();
        Pharmacien_Chercheur(long , string , string  , Date* , string);
        virtual ~Pharmacien_Chercheur();
        Pharmacien_Chercheur(const Pharmacien_Chercheur& other);
        friend ostream& operator<<(ostream&, Pharmacien_Chercheur&);
        friend istream& operator>>(istream&, Pharmacien_Chercheur&);
        friend ostream& operator<<(ostream&, Pharmacien_Chercheur*);
        friend istream& operator>>(istream&, Pharmacien_Chercheur*);
        int getCarteIdentite();
        void AjouterAnalyse_Formule(Analyse_Formule*);
        void ModifierAnalyse_Formule(Analyse_Formule*);
        void SupprimerAnalyse_Formule(Analyse_Formule*);
        void AjouterRapport_Formule(Rapport_Formule*);
        void ModifierRapport_Formule(Rapport_Formule*);
        void SupprimerRapport_Formule(Rapport_Formule*);
        void ListerAnalyse_Formule();
        void ListerRapport_Formule();
};

#endif // PHARMACIEN_CHERCHEUR_H
