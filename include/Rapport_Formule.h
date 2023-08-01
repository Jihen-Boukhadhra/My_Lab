#ifndef RAPPORT_FORMULE_H
#define RAPPORT_FORMULE_H

#include <Date.h>


class Rapport_Formule
{
    int ref_rapport;
    Date* date_rapport;
    bool etat;

    public:
        Rapport_Formule();
        Rapport_Formule(int, Date* , bool);
        virtual ~Rapport_Formule();
        Rapport_Formule(const Rapport_Formule& other);
        friend ostream& operator<<(ostream&, Rapport_Formule&);
        friend istream& operator>>(istream&, Rapport_Formule&);
        int getRefRapport();
};

#endif // RAPPORT_FORMULE_H
