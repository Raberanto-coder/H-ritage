#ifndef VEHICULE_H_INCLUDED
#define VEHICULE_H_INCLUDED

#include<string>
using namespace std;

class Vehicule
{
public:
    Vehicule();
    ~Vehicule();
    void Lis_vehicule();
   //void Affiche_vehicule();
protected:
    string proprietaire;    // le nom du propriétaire
    string type_vehicule;    //Deux roues ou quatre roues
};


#endif // VEHICULE_H_INCLUDED
