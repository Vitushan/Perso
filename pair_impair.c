#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{ 

  int nombre = 0;

  printf("\tDonnez un nombre entier : \n");
  scanf("%d", &nombre);

  //verification si le nombre est pair ou impair
  if (nombre % 2 == 0)
{
      printf("%d est un nombre paire\n", nombre);
 }
  else
{
      printf("%d est un nombre impaire\n", nombre);
 }
  

    return 0 ;
}
