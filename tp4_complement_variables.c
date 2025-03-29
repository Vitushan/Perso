#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  printf("\tTP4: Complements sur les variables\n");

  int rayon = 0;
  //saisie d'utilisateur aux clavier
  printf("Quel est le rayon du cercle ?\n");
  scanf("%d", &rayon);

  int diametre = rayon * 2;

  printf("Le diametre du cercle est : %d\n" , diametre);

  float circonference = 2 * M_PI  * rayon;

  printf("Ce cercle a pour circonference %f\n", circonference);

  float aire = M_PI * pow(rayon, 2);
  printf("L'air du cercle est : %f\n", aire);

  float  hauteur_volume_cylindre = 0.0;

  printf("Quelle est la hauteur du volume du cylindre ?\n");
  scanf("%f",&hauteur_volume_cylindre);
  printf("la hauteur du volume du cylindre est %f\n", hauteur_volume_cylindre);
  
  //calcul du volume du cylindre
  float volume_du_cylindre = ( M_PI * pow (rayon, 2) * hauteur_volume_cylindre);
  printf("ce cylindre a pour volume %f.\n",volume_du_cylindre);

  //calcul volume du cone
  float volume_du_cone = (M_PI * pow(rayon, 2) * hauteur_volume_cylindre) / 3;
  printf("ce cone a pour volume %f.\n", volume_du_cone);
					     
  return 0;
}
