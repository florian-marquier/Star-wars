#ifndef Heros_h
#define Heros_h

#include <iostream>
#include <string>
#include "Arme.h"

class Heros
{
private :
    std:: string m_nomheros;
    int m_vieheros;
    Arme m_arme;
public :
    Heros();
    Heros(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
    void diminuervie(int vieenmoins);
    void attaquer(Heros &cible);
    void changerarme(std::string nomnouvellearme, int puissancenouvellearme);
    bool vivant() const;
    void afficher() const;
};
#include "Heros.cpp"
#endif