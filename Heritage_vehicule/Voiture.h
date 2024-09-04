#ifndef VOITURE_H_INCLUDED
#define VOITURE_H_INCLUDED

#include"Vehicule.h"

class Voiture:public Vehicule
{
public :
    Voiture();
    ~Voiture();
    void caracteristique_voiture();
    void Affiche_voiture();
private :
    string nom_voiture;
    string seteur_utilisation;
    int nbr_place;
};


#endif // VOITURE_H_INCLUDED
