#ifndef PROJET_H
#define PROJET_H
#include <string>
#include <Date.h>
#include <ostream>
#include <istream>

using namespace std;

class Projet
{
    protected:
    int referenceProjet;
    string Titre;
    string DesignationMed;
    Date* Date_debut;
    Date* Date_fin;
    static int total_projet;


    public:
        Projet();
        Projet(int , string , string , Date* , Date*);
        virtual ~Projet();
        Projet(const Projet&);
        friend ostream& operator<<(ostream&, Projet&);
        friend istream& operator>>(istream&, Projet&);
        friend ostream& operator<<(ostream&, Projet*);
        friend istream& operator>>(istream&, Projet*);
        int getReferenceProjet();
        virtual int getTotalEmployee() = 0;
        static int getTotalProjet();
};

#endif // PROJET_H
