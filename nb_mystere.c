#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  printf("TP6: LES BOUCLES;\n");

  // declaration de nos variables
  int nombre_mystere = 0, nombre_user = 0, nombre_tentative = 0, choix = 0;
  const int VALEUR_MIN = 1, VALEUR_MAX = 100, TENTATIVE_MAX = 5;

do
  {
  
 // generation d'un nombre aleatoire
 srand(time(NULL));
 nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
 nombre_tentative = 0;

 printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre %d et %d \n", VALEUR_MIN, VALEUR_MAX);
 
do
  {
    if(nombre_tentative >= TENTATIVE_MAX)
      {
        printf("Dommage! Le nombres mystere était %d\n", nombre_mystere);
	break;
      }
    //saisie d'user
    scanf("%d", &nombre_user);
    nombre_tentative++;
   
    //on compare nombre_user avec  le nombre mystere
    if(nombre_user < nombre_mystere)
      {
        printf("augmente , cest trop petit.\n");
      }
    else if (nombre_user > nombre_mystere)
      {
        printf("Baisse , cest trop grand.\n");
      }
    else
      printf("bingo! ta trouver le fameux nombre mystere %d,tu l'as trouver en %d tentatives.\n",nombre_mystere, nombre_tentative);
  }
  while (nombre_user != nombre_mystere);

 printf("Voulez-vous rejouer une nouvelle partie ? (1-oui ou 2-non");
   scanf("%d", &choix);
  }
 while (choix != 2);

   printf("A bientot.\n");
  return 0;
}
