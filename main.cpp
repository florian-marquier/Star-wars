#include <iostream>
#include "Heros.h"
using namespace std;

int main() {
    Heros yoda("Maitre Yoda", 80, "Force", 50);
    Heros luke("Luke Skywalker", 150, "Sabre Laser", 40);
    Heros leia("Princesse Leia", 100, "Pistolet Laser", 30);
    Heros solo("Han Solo", 100, "Pistolet Laser", 30);
    Heros chewie("Chewbacca", 100, "Pistolet Laser", 30);
    Heros obiwan("Obi-Wan Kenobi", 90, "Force", 50);
    Heros r2d2("R2-D2", 50, "Gadgets", 5);
    Heros palpatine("Empereur Palpatine", 150, "Force", 50);
    Heros vador("Dark Vador", 200, "Force", 50);
    //ajout
    Heros rey("Rey", 100, "Sabre Laser", 40);
    Heros finn("Finn", 100, "Pistolet Laser", 5);
    Heros bb8("BB8", 50, "Gadgets", 5);
    Heros kylo("Kylo Ren", 150, "Sabre laser", 40);
    Heros premier("Premier Ordre", 200, "Force", 50);

    // Afficher les informations des Heros
    cout << "*********** Avant le Combat ***********" << endl;
    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();
    //ajout
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    // Combat
    vador.attaquer(luke);
    luke.attaquer(vador);
    obiwan.attaquer(vador);
    r2d2.attaquer(palpatine);
    palpatine.attaquer(r2d2);
    //ajout
    rey.attaquer(kylo);
    finn.attaquer(kylo);
    kylo.attaquer(rey);

    // Afficher les informations des Heros
    cout << "********** Pendant le Combat ******" << endl;
    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();
    //ajout
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    // Combat
    luke.changerarme("Force", 50);
    luke.attaquer(palpatine);
    chewie.attaquer(vador);
    leia.attaquer(palpatine);
    solo.attaquer(vador);
    palpatine.attaquer(solo);
    luke.attaquer(vador);
    //ajout
    bb8.attaquer(kylo);
    rey.attaquer(kylo);
    finn.attaquer(kylo);
    bb8.attaquer(kylo);

    // Afficher les informations des Heros
    cout << " ********* Pendant le Combat *** " << endl;
    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();
    //ajout
    rey.changerarme("Force", 50);
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    // Combat
    solo.attaquer(palpatine);
    yoda.attaquer(palpatine);
    //ajout
    premier.attaquer(finn);
    rey.attaquer(premier);
    finn.attaquer(premier);
    bb8.attaquer(premier);
    premier.attaquer(bb8);


    // Afficher les informations des Heros
    cout << "************ Fin du Combat ******" << endl;
    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();
    //ajout
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    //combat
    cout<<"********** DEBUT COMBAT **********"<<endl;
    finn.changerarme("Sabre Laser de Rey", 50);
    rey.attaquer(premier);
    finn.attaquer(premier);
    rey.attaquer(premier);

    // Afficher les informations des Heros
    cout << "************ Fin du Combat ******" << endl;
    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

    return 0;
}