#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#pragma once

typedef struct vecteur{
    int nA;
    int nB;
}vecteur;

extern vecteur SommeVecteur(const vecteur stU, const vecteur stV);
extern vecteur SoustractionVecteur(const vecteur stU, const vecteur stV);
extern vecteur MultiplicationScalVecteur(const vecteur stU, const int nScal);

#endif // POINT_H_INCLUDED
