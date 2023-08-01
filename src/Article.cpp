#include "Article.h"
#include <iostream>
#include <iomanip>

using namespace std;

Article::Article()
{
    //ctor
}

Article::Article(int ReferenceArticle, string Titre, string Aprecu , Date* date_creation)
{
    this->ReferenceArticle = ReferenceArticle;
    this->Titre = Titre;
    this->Aprecu = Aprecu;
    this->date_creation = date_creation;
}

Article::Article(const Article& a)
{
    this->ReferenceArticle = a.ReferenceArticle;
    this->Titre = a.Titre;
    this->Aprecu = a.Aprecu;

}


ostream& operator<<(ostream& o, Article& a){
    o << right << setw(15) << a.ReferenceArticle << setw(15) << a.Titre << setw(15) << a.Aprecu << endl;
    return o;

}

ostream& operator<<(ostream& o, Article* a){
    o << a->ReferenceArticle <<  endl;
    o << a->Titre << endl;
    o << a->Aprecu << endl;
    return o;
}



istream& operator>>(istream& i, Article& a){
    cout << "Saisir Reference Article : ";
    i >> a.ReferenceArticle;
    cout << "Saisir Titre : ";
    i >> a.Titre;
    cout << "Saisir Aprecu : ";
    i >> a.Aprecu;

    return i;
}

istream& operator>>(istream& i, Article* a){
    cout << "Saisir Reference Article : ";
    i >> a->ReferenceArticle;
    cout << "Saisir Titre : ";
    i >> a->Titre;
    cout << "Saisir Aprecu : ";
    i >> a->Aprecu;

    return i;
}


int Article::getReferenceArticle()
{
    return this->ReferenceArticle;
}



Article Article::operator+(const Article& a)
{
    int newRef = 0; // We create a new Article with reference 0 for convenience
    string newTitre = this->Titre + " " + a.Titre;
    string newApercu = this->Aprecu + " " + a.Aprecu;
    return Article(newRef, newTitre, newApercu);
}






Article::~Article()
{
    //dtor
}
