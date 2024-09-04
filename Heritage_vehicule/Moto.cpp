#include<iostream>
#include"Moto.h"

Moto::Moto()
{}
Moto::~Moto()
{}
void Moto::caracteristique_moto()
{
    //if (type_vehicule == "Deux roues")
    cout<<"Nous avons deux types de vehicule avec deux roues Moto et Scooter"<<endl;
    cout<<"Quel est votre choix Moto ou Scooter ?"<<endl;
    cout<<"Choix : ";
    cin>>type_moto;
    if (type_moto == "Moto")
    {
        type_vitesse = "manuelle";
        cylindre = 125;
        permis = "obligatoire";
    }
    else
    {
        type_vitesse = "automatique";
        cylindre = 50;
        permis = "sans permis";
    }

}
void Moto::Affiche_moto()
{
    cout<<"- Type de vitesse : "<<type_vitesse<<endl;
    cout<<"- Cilyndre : "<<cylindre<<"cm3"<<endl;
    cout<<"- Permis : "<<permis<<endl;
}
