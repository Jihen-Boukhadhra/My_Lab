#ifndef ARTICLE_H
#define ARTICLE_H
#include <string>


using namespace std;


class Article
{

    int ReferenceArticle;
    string Titre;
    string Aprecu;
    Date* date_creation;


    public:
        Article();
        Article(int , string , string , Date*);
        Article(const Article&);
        int getReferenceArticle();
        friend ostream& operator<<(ostream&, Article&);
        friend istream& operator>>(istream&, Article&);
        friend ostream& operator<<(ostream&, Article*);
        friend istream& operator>>(istream&, Article*);
        Article operator+(const Article& a);

        virtual ~Article();

    protected:

    private:
};

#endif // ARTICLE_H
