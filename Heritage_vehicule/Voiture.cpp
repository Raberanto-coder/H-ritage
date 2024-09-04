#include<iostream>
#include"Voiture.h"

Voiture::Voiture()
{}
Voiture::~Voiture()
{}
void Voiture::caracteristique_voiture()
{
    nom_voiture = "Camion";
    seteur_utilisation = "Véhicule industriel tracteur de semi-remorque";
    nbr_place = 3;
}
void Voiture::Affiche_voiture()
{
    cout<<"Notre modele est un camion"<<endl;
    cout<<"Voici les caracterictique d'un camion"<<endl;
    cout<<"Nom de la voiture : "<<nom_voiture<<endl;
    cout<<"Secteur d'utilisation : "<<seteur_utilisation<<endl;
    cout<<"Nombre de places assises : "<<nbr_place<<endl;
}
