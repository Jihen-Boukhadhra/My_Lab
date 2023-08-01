#ifndef RESPONSABLEPROJET_H
#define RESPONSABLEPROJET_H
#include <vector>


using namespace std;

template <class T>
class ResponsableProjet {
private:
    vector<T*> projets;
public:
    void ajouterProjet(T* projet) {
        projets.push_back(projet);
    }

    void supprimerProjet(int index) {
        delete projets[index];
        projets.erase(projets.begin() + index);
    }

    T* getProjet(int index) {
        return projets[index];
    }

    int getNombreProjets() const {
        return projets.size();
    }

};

#endif // RESPONSABLEPROJET_H
