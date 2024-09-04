#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

#include"Vehicule.h"

class Moto:public Vehicule
{
public :
    Moto();
    ~Moto();
    void caracteristique_moto();
    void Affiche_moto();
private :
    string type_moto;    //moto ou scooter
protected :
    string type_vitesse;    //manuelle ou automatique
    int cylindre;     //125cc ou 50cc
    string permis;     //obligatoire ou sans permis
};


#endif // MOTO_H_INCLUDED
