#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  //declaration variable
  int saisie_utilisateur = 0;
  const int CODE_PIN = 1234;

  //saisie de lecture au clavier utilisateur
  printf("\ttaper votre code pin\n");
  scanf("%d",&saisie_utilisateur);

  //condition if else
  if(saisie_utilisateur == CODE_PIN)
{
  printf("Code pin valide\n");
}
  else
{
  printf("Code pin incorrect.\n");
}
  return 0 ;
}
