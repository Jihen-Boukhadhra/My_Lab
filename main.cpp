#include <iostream>
#include <UniteDeRecherche.h>
#include <Projet.h>
#include <Date.h>
#include <Pharmacien_Chercheur.h>
#include <Analyse_Formule.h>
#include <Exception.h>
#include <Util.h>
#include <ProjetBiologique.h>
#include <Projet_Pharmaceutique.h>
#include <ResponsableProjet.h>
#include <fstream>


using namespace std;

int main()
{

    Util::HomePage();
    UniteDeRecherche U("Your Lab", 2500);

    ProjetBiologique* pb1 = new ProjetBiologique(1 , "AA" , "AA" , new Date(1 , 1 , 2000) , new Date(1 , 1 , 2000) , "Cellulaire");
    ProjetBiologique* pb2 = new ProjetBiologique(8 , "AA" , "AA" , new Date(1 , 1 , 2000) , new Date(1 , 1 , 2000) , "Cellulaire");

    U.AjouterProjet(pb1);

    Biologiste* b = new Biologiste(1 , "Ahmed" , "Mohamed" , new Date(1 , 1 , 2000) , "Mohaa");

    U.AjouterChercheur(b);


    Rapport_Formule rf(1 , new Date(1 , 2, 3) , false);

    int choix = -1;
    while (choix != 0)


    {
        cout << "\nMenu:\n\n";
        cout << "1  . Ajouter Projet Pharmaceutique\n";
        cout << "2  . Ajouter Projet Biologique\n";
        cout << "3  . Ajouter Biologiste\n";
        cout << "4  . Ajouter Pharmacien Chercheur\n";
        cout << "5  . Lister Les Projets\n";
        cout << "6  . Lister Les Chercheurs\n";
        cout << "7  . Supprimer un Projet\n";
        cout << "8  . Supprimer un Chercheur\n";
        cout << "9  . Ajouter Article\n";
        cout << "0  . Quitter Application\n";
        cout << "\n Entrez votre choix: ";
        cin >> choix;

        switch (choix)
        {
        case 1:
        {
            Projet_Pharmaceutique* projet = new Projet_Pharmaceutique();
            cin >> projet;
            cout << projet;
            U.AjouterProjet(projet);
            break;
        }
        case 2:
        {
            ProjetBiologique* projet = new ProjetBiologique();
            cin >> projet;
            U.AjouterProjet(projet);
            break;
        }
        case 3:
        {
            Biologiste* biologiste = new Biologiste();
            cin >> biologiste;
            U.AjouterChercheur(biologiste);
            break;
        }
        case 4:
        {
            Pharmacien_Chercheur* pharmacien = new Pharmacien_Chercheur();
            cin >> pharmacien;
            U.AjouterChercheur(pharmacien);
            break;
        }
        case 5:
            U.ListerProjets();
            break;
        case 6:
            U.ListerChercheur();
            break;

        case 7:
        {
            int id;
            U.ListerProjets();
            cout << "\n Saisir la reference du Projet : ";
            cin >> id;
            cout << "\n";
            Projet* p = U.ObtenirProjet(id);
            U.SupprimerProjet(p);
            U.ListerProjets();
            break;
        }
        case 8:
        {
            int id;
            U.ListerChercheur();
            cout << "\n Saisir la carte d'identite du Chercheur : ";
            cin >> id;
            cout << "\n";
            Chercheur* c = U.ObtenirChercheur(id);
            U.SupprimerChercheur(c);
            U.ListerChercheur();
            break;
        }
        case 9:
        {
            int id;
            U.ListerChercheur();
            cout << "\n Saisir la carte d'identite du Chercheur : ";
            cin >> id;
            Chercheur* c = U.ObtenirChercheur(id);
            Biologiste* b = dynamic_cast<Biologiste*>(c);

            Article* article = new Article();
            cin >> article;

            ofstream outfile("articless.txt");


            outfile << article;


            b->ajouterArticle(article);


            break;
        }

        default:
            cout << "Choix invalide. Veuillez entrer un nombre entre 1 et 10.\n";
            break;
        }
    }

    return 0;
}
