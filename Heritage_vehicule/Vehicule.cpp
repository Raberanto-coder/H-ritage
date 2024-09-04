#include<iostream>
#include"Vehicule.h"

Vehicule::Vehicule()
{}
Vehicule::~Vehicule()
{}
void Vehicule::Lis_vehicule()
{
    cout<<"Véhicule"<<endl;
    cout<<"Tout d'abord, entrer le nom de la proprietaire : ";
    cin>>proprietaire;
    cout<<"Il y a deux types de véhicule que nous allons voir ici. Il s'agit de véhicule terrestre"<<endl;
    cout<<"Quel est votre choix Deux roues ou Quatre roues ?"<<endl;
    cin>>type_vehicule;
}
