#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char lettre = ' ';
  
  printf("\t Code ASCII\n");

  printf("Entrez Une Lettre :\n");
  scanf( "%c", &lettre);
  printf("vous avez choisit la lettre: %c\n",lettre);

  printf(" - %c en caractere\n", lettre);
  printf(" - %d en nombre décimal.\n",(int)lettre);
  printf(" - %x en nombre hexadécimal\n",(int)lettre);

  return 0;
}

