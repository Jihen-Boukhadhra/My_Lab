#ifndef BIOLOGISTE_H
#define BIOLOGISTE_H

#include <Chercheur.h>
#include <Article.h>
#include <string>
#include <map>
#include "Date.h"


using namespace std;

class Biologiste : public Chercheur
{

    string email;
    map<int , Article*> Articles;

    public:
        Biologiste();
        Biologiste(long , string , string , Date* , string);
        Biologiste(const Biologiste&);
        friend ostream& operator<<(ostream&, Biologiste&);
        friend istream& operator>>(istream&, Biologiste&);
        friend ostream& operator<<(ostream&, Biologiste*);
        friend istream& operator>>(istream&, Biologiste*);
        int getCarteIdentite();
        void ajouterArticle(Article*);
        Article* obtenirArticle(int id);
        void supprimerArticle(int id);
        void ListerArticles();
        void PublierArticles();
        void RecupererArticles();
        virtual ~Biologiste();

    protected:

    private:
};

#endif // BIOLOGISTE_H
