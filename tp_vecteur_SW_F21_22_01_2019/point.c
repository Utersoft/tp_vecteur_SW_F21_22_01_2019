#include "point.h"


vecteur SommeVecteur(const vecteur stU, const vecteur stV){
    vecteur stSomme;

    stSomme.nA = stU.nA + stV.nA;
    stSomme.nB = stU.nB + stV.nB;

    return stSomme;
}

vecteur SoustractionVecteur(const vecteur stU, const vecteur stV){
    vecteur stSoustraction;

    stSoustraction.nA = stU.nA - stV.nA;
    stSoustraction.nB = stU.nB - stV.nB;

    return stSoustraction;
}

vecteur MultiplicationScalVecteur(const vecteur stU, const int nScal){
    vecteur stMultiplication;

    stMultiplication.nA = stU.nA * nScal;
    stMultiplication.nB = stU.nB * nScal;

    return stMultiplication;
}

