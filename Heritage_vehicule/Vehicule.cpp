#include<iostream>
#include"Vehicule.h"

Vehicule::Vehicule()
{}
Vehicule::~Vehicule()
{}
void Vehicule::Lis_vehicule()
{
    cout<<"V�hicule"<<endl;
    cout<<"Tout d'abord, entrer le nom de la proprietaire : ";
    cin>>proprietaire;
    cout<<"Il y a deux types de v�hicule que nous allons voir ici. Il s'agit de v�hicule terrestre"<<endl;
    cout<<"Quel est votre choix Deux roues ou Quatre roues ?"<<endl;
    cin>>type_vehicule;
}
