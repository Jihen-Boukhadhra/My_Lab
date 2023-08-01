#ifndef DATE_H
#define DATE_H
#include <ostream>
#include <istream>

using namespace std;


class Date
{
    int jour;
    int mois;
    int annee;



    public:
        Date();
        Date(int , int , int);
        friend ostream& operator<<(ostream&, Date&);
        friend istream& operator>>(istream&, Date&);
        friend ostream& operator<<(ostream&, Date*);
        friend istream& operator>>(istream&, Date*);
        virtual ~Date();

    protected:

    private:
};

#endif // DATE_H
