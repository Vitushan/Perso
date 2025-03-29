#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  printf("\tTP5: Les Conditions\n");

  int nombre1 = 0, nombre2 = 0, resultat = 0 ,operateur_valide = 0;
  char operateur = ' ';
  //lecture et affichage des saisie d'user aux clavier    
  printf("Salut , Bienvenue dans CALCULATOR CITY GANG!\n");
  printf("Ma mission est de résoudre tes operations mathématique.\n");
  printf("\tIndique les calculs a effectué sous la forme de: (nombre1 opérateur nombre2),par exemple 2+4.\n");
  printf("\tOperateurs possibles (+, -, *, /, %%)\n");
  scanf("%d %c%d",&nombre1, &operateur, &nombre2);

  switch(operateur)
    {
    case'+':
      
      resultat = nombre1 + nombre2; //calcul addition dans la variable resultat
      operateur_valide = 1;
      break;

    case '-':
      resultat = nombre1 - nombre2; //calcul soustraction
      operateur_valide = 1;
      break;

    case '/':
      if(nombre2 == 0){
      printf("Impossible de diviser par 0\n"); //affichage message d'erreur imposssible de divisé par 0
        }
      else
        {
          resultat = nombre1 / nombre2; //calcul division eucledienne
	  operateur_valide = 1;
	}
      break;

    case '*':
      resultat = nombre1 * nombre2; //calcul multiplication
      operateur_valide = 1;
      break;

    case '%':
      if(nombre2 == 0){
	printf("Impossible de moduler par 0\n"); //affichage message d'erreur impossible de diviser par 0
      }
      
      else{
	resultat = nombre1 % nombre2; //calcul modulaire(reste de la divison)
        operateur_valide = 1;
      }
      break;
      
    default:
      printf("Operateur incorrect veuillez reformulez votre calcul\n"); //Affichage erreur 
      operateur_valide = 0;
      break; 
    }
     if(operateur_valide)
    {
      printf("Trop simple le resultat est: %d %c%d = %d \n",nombre1, operateur,  nombre2, resultat);
    }
     else{
     printf("erreur de calcul\n");
     
     }
  return 0;
}

