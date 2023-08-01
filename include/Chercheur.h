#ifndef CHERCHEUR_H
#define CHERCHEUR_H
#include <string>
#include <ostream>
#include <istream>
#include "Date.h"

using namespace std;

class Chercheur
{
    protected:
    long carte_identite;
    string nom;
    string prenom;
    Date* date_naissance;
    static int total_chercheurs;

    public:
        Chercheur();
        Chercheur(long , string , string , Date*);
        Chercheur(const Chercheur&);
        virtual ~Chercheur();
        friend ostream& operator<<(ostream&, Chercheur&);
        friend istream& operator>>(istream&, Chercheur&);
        friend ostream& operator<<(ostream&, Chercheur*);
        friend istream& operator>>(istream&, Chercheur*);
        virtual int getCarteIdentite() = 0;
        static int getTotalChercheurs();



};

#endif // CHERCHEUR_H
