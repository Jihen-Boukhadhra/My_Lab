#ifndef FORMULE_H
#define FORMULE_H
#include <Date.h>

template <class T>
class Formule
{
        T a;
        T b;
        T c;
    public:
        Formule(T a=0,T b=0,T c=0);
        virtual ~Formule();
        Formule(const Formule& other);

};

#endif // FORMULE_H
