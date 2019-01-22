#include <stdio.h>
#include <stdlib.h>
#include "point.h"

int main()
{
    vecteur stU, stV;



    printf("Entrez les valeurs du vecteur U.\nLa premiere valeur de U :");
    scanf("%i", &stU.nA);
    printf("La deuxieme : ");
    scanf("%i", &stU.nB);
    printf("Entrez les valeurs du vecteur V.\nLa premiere valeur de V :");
    scanf("%i", &stV.nA);
    printf("La deuxieme : ");
    scanf("%i", &stV.nB);

    printf("Le vecteur U - V est egal a : %i %i\n", SommeVecteur(stU, stV).nA, SommeVecteur(stU, stV).nB);
    printf("Le vecteur U - V est egal a : %i %i\n", SoustractionVecteur(stU, stV).nA, SoustractionVecteur(stU, stV).nB);
    printf("Le vecteur U * alpha est egal a : %i %i\n", MultiplicationScalVecteur(stU, 2).nA, MultiplicationScalVecteur(stU, 2).nB);

    return 0;
}
