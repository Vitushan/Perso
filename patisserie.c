#include <stdio.h>
#include <stdlib.h>


int main ()
{

int choix_user = 0;

  printf("Quel est votre choix: ? 1-Chocolatine 2-Croissant 3-Tarte aux pommes\n");
  scanf("%d", &choix_user);

  switch(choix_user)
{
 case 1:
  printf("Vous avez choisi la Chocolatine.\n");
  break;

 case 2:
   printf("Vous avez choisi un Croissant\n");
  break;

 case 3:
   printf("Vous avez choisi la tarte aux pommes\n");
 break;

 default:
   printf("\tVotre choix est erroné\n");
 break;
 }
  
  return 0;
}
