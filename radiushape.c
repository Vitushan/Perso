#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\t TP4_complement_variables.\n");
    

    int rayon_cercle = 0;
    //saisie de l'utilisateur aux clavier
    printf("\tDonnez un rayon du cercle:\n");
    scanf("%d", &rayon_cercle);

    //declaration des variables
    int diametre_cercle = rayon_cercle * 2;
    float circonference_cercle = 2 * M_PI * rayon_cercle;
    float aire_cercle = M_PI * pow(rayon_cercle,2);
    
    //affichage des variables
    printf("Le rayon du cercle est: %d.\n", rayon_cercle);
    printf("Ce cercla a pour diamétre: %d.\n", diametre_cercle);
    printf("Ce cercle a pour circonference:%.2f\n", circonference_cercle);
    printf("Ce cercle a pour aire: %.2f\n", aire_cercle);

    float hauteur_volume = 0.0;
    //saisie de l'utilisateur aux clavier
    printf("\tquel est la hauteur du volume?\n");
    scanf("%f", &hauteur_volume);  

    //declaration des variables
    float volume_cylindre = M_PI * pow(rayon_cercle,2) * hauteur_volume;
    float volume_cone = M_PI * pow(rayon_cercle,2) * hauteur_volume / 3;

    //affichage des variables
    printf("Ce cylindre a pour volume:%.2f \n", volume_cylindre);
    printf("Ce cone a pour volume : %.2f\n",volume_cone);

    return 0;
}
