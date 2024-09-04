#include <iostream>
#include"Vehicule.h"
#include"Moto.h"
#include"Voiture.h"

using namespace std;

int main()
{
    string type_vehicule;
    Vehicule v1;
    v1.Lis_vehicule();
    if (type_vehicule == "Deux roues")
    {
        v1.caracteristique_moto();
        v1.Affiche_moto();
    }
    esle
    {
        v1.caracteristique_voiture();
        v1.Affiche_voiture();
    }
}


/*#include<iostream>

int main()
{
    std::cout<<"Bonjour"<<std::endl;
    return 0;
}  */
