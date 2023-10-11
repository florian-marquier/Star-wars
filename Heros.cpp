#include <iostream>
#include "Heros.h"
using namespace std;
void Heros::diminuervie(int vieenmoins)

{
    m_vieheros -= vieenmoins;
    if (m_vieheros<0)
        m_vieheros=0;
}
void Heros::attaquer(Heros &cible)
{
    cout<<m_nomheros<< "attaque "<< cible.m_nomheros <<endl;
    cible.diminuervie(m_arme.getpuissance());
}
void Heros::changerarme(string nomnouvellearme, int puissancenouvellearme)
{
    m_arme.changerarme(nomnouvellearme, puissancenouvellearme);
}
bool Heros::vivant() const
{
    return (m_vieheros>0);
}
Heros::Heros() : m_nomheros("Inconne"), m_vieheros(0) {}
Heros::Heros(string nomheros, int vieheros, string nomarme, int puissancearme)
{
    m_nomheros = nomheros;
    m_vieheros = vieheros;
    m_arme = Arme(nomarme, puissancearme);
}
void Heros::afficher() const
{
    cout<<"Heros : "<<m_nomheros<< "\tVie : "<<m_vieheros<<endl;
    m_arme.afficher();
    if (vivant() == true)
    {
        cout<<" Heros Vivant"<< endl;
    }
    else
    {
        cout<<"Heros Mort"<<endl;
    }
    cout<<"--------------------------"<<endl;
}