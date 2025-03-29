#include <stdio.h>
#include <stdlib.h>

int main ()
{
  printf("\tCalcul de geometrie\n");

int taille_cote_du_carre = 0;
int perimetre_du_carre = 0;  //perimetre du carré = 4 *coté du carré
int surface_du_carre = 0;   //coté du carré  * coté du carré

 printf("Quelle est la taille d'un coté du carré?\n");
 scanf("%d", &taille_cote_du_carre);

//operations des calculs geometrie
perimetre_du_carre = taille_cote_du_carre * 4;
surface_du_carre = taille_cote_du_carre * taille_cote_du_carre ;

//affichage des resultats du calcul geometrique
printf("Le resultat du perimetre du carré est de %d \n", perimetre_du_carre);
printf("Le resultat du surface du carré est de %d \n", surface_du_carre);

 return 0;
}
