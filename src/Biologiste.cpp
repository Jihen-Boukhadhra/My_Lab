#include "Biologiste.h"
#include "Chercheur.h"
#include "Date.h"
#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

Biologiste::Biologiste()
{
    //ctor
}

Biologiste::Biologiste(long carte_identite, string nom , string prenom , Date* date_naissance , string email) : Chercheur(carte_identite , nom , prenom , date_naissance )
{
    this->email = email;

}

Biologiste::Biologiste(const Biologiste& b) : Chercheur(b)
{
    this->email = b.email;
}
void Biologiste::ListerArticles()
{
    cout << right << setw(15) << "id" << setw(15) << "Titre" << setw(15) << "Aprecu" << endl;
    cout << setfill('-') << setw(90) << "" << setfill(' ') << endl;

    for (auto it = this->Articles.begin(); it != this->Articles.end(); ++it) {
        cout << it->second;
    }


}



void Biologiste::ajouterArticle(Article* article)
{
    this->Articles[article->getReferenceArticle()] = article;
}

Article* Biologiste::obtenirArticle(int id)
{
    return this->Articles[id];

}

void Biologiste::supprimerArticle(int id)
{
    auto it = this->Articles.find(id);
        if (it != this->Articles.end()) {
            delete it->second;
            this->Articles.erase(it);
        }

}

ostream& operator<<(ostream& o, Biologiste& b){
    Chercheur& c = static_cast<Chercheur&>(b);
    o << c << " - " << b.email << endl;
    return o;
}


istream& operator>>(istream& i, Biologiste& b){
    Chercheur& c = static_cast<Chercheur&>(b);
    i >> c;
    cout << "Saisir L'email : ";
    i >> b.email;

    return i;
}


ostream& operator<<(ostream& o, Biologiste* b){
    Chercheur* c = static_cast<Chercheur*>(b);
    o << c << " - " << b->email << endl;
    return o;
}


istream& operator>>(istream& i, Biologiste* b){
    Chercheur* c = static_cast<Chercheur*>(b);
    i >> c;
    cout << "Saisir L'email : ";
    i >> b->email;

    return i;
}

void Biologiste::PublierArticles()
{
    ofstream outfile("articles.txt");
    if (outfile.is_open())
    {
        for (auto it = this->Articles.begin(); it != this->Articles.end(); ++it) {
            outfile << it->second;
        }

        outfile.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }
}


void Biologiste::RecupererArticles(){
    ifstream fichier;
    fichier.open("articles.txt");
    Article* a;
    while (!fichier.eof())
    {
        a = new Article();
        fichier >> a;

    }

}

int Biologiste::getCarteIdentite()
{
    return this->carte_identite;
}



Biologiste::~Biologiste()
{
    for (auto it = Articles.begin(); it != Articles.end(); ++it) {
            delete it->second;
    }
}
