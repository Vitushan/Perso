#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("\tTP5 LES CONDITIONS\n");
  
  int nmbre1 = 0, nmbre2 = 0, resultat = 0, operateur_valide = 0;
  char operateur = ' ';

  //message d'acceuil
  printf("\tbienvenue sur calculand\n");  
  printf("saisissez un nombre,puis un operateur (+ - * / %%) et un deuxieme nombre \n");
  printf("par exemple (34+45)\n");

  //lecture des saisie aux clavier
  scanf("%d %c %d",&nmbre1, &operateur, &nmbre2);

    //traitement des opérations
    switch(operateur)
    {
    case '+':
      resultat = nmbre1 + nmbre2;
      operateur_valide = 1;
      break;

    case '-':
      resultat = nmbre1 - nmbre2;
      operateur_valide = 1;
      break;

    case '*':
      resultat = nmbre1 * nmbre2;
      operateur_valide = 1;
      break;

    case '/':
      if (nmbre2 == 0)
	{
	  printf("division par 0 impossible!\n");
	  operateur_valide = 0;
	}
      else
	{
        resultat = nmbre1 / nmbre2;
	operateur_valide = 1;
        }
      break;

    case '%':
      if(nmbre2 == 0)
	{
	  printf("moduler par 0 est impossible!\n");
	  operateur_valide = 0;
	}
      else
	{
	  resultat = nmbre1 % nmbre2;
	  operateur_valide = 1;
	}
      break;
      
    default:
      printf("operateur INVALIDE!\n");
      operateur_valide = 0;
      break;
    }
    //affichage des résultat si l'operateur est valide
    if(operateur_valide)
      {
      printf("Simple le resultat du calcul est:%d %c %d = %d\n",nmbre1, operateur, nmbre2, resultat);   
      }
    
  return 0;
}
