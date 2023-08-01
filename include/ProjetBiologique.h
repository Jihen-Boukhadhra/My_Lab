#ifndef PROJETBIOLOGIQUE_H
#define PROJETBIOLOGIQUE_H
#include <Projet.h>
#include <string>
#include <ostream>
#include <istream>
#include <vector>
#include "Date.h"
#include "Biologiste.h"

using namespace std;


class ProjetBiologique : public Projet
{
    string type;
    vector <Biologiste*> Biologistes;


    public:
        ProjetBiologique();
        ProjetBiologique(int , string , string , Date* , Date* , string);
        friend ostream& operator<<(ostream&, ProjetBiologique&);
        friend istream& operator>>(istream&, ProjetBiologique&);
        friend ostream& operator<<(ostream&, ProjetBiologique*);
        friend istream& operator>>(istream&, ProjetBiologique*);
        ProjetBiologique(const ProjetBiologique&);
        void AjouterBiologiste(Biologiste*);
        void SupprimerBiologiste(Biologiste*);
        void ListerBiologiste();
        int getTotalEmployee();
        virtual ~ProjetBiologique();

    protected:

    private:
};

#endif // PROJETBIOLOGIQUE_H
