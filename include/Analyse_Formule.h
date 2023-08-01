#ifndef ANALYSE_FORMULE_H
#define ANALYSE_FORMULE_H
#include <string>
#include <Date.h>

using namespace std;

class Analyse_Formule
{
       int ref_analyse;
       Date* date_analyse;
       string description;
    public:
        Analyse_Formule();
        Analyse_Formule(int, Date* , string);
        virtual ~Analyse_Formule();
        Analyse_Formule(const Analyse_Formule& other);
        friend ostream& operator<<(ostream&, Analyse_Formule&);
        friend istream& operator>>(istream&, Analyse_Formule&);
        int getReferenceAnalyse();
};

#endif // ANALYSE_FORMULE_H
