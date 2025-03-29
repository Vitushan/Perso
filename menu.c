#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int menu = 0;
  printf("\t=== Menu ===\n");
  printf("1. Royal Cheese\n");
  printf("2. Mc Deluxe\n");
  printf("3. Mc Bacon\n");
  printf("4. Big Mac\n");

  printf("\nVotre choix ?");
  scanf("%d" , &menu);

  switch (menu)
    {
    case 1:
        printf("Tu as choisi le menu Royal Cheese.\n");
        break;
      
    case 2:
      printf("Tu as choisi le menu Mc Deluxe.\n");
      break;

    case 3:
      printf("Tu as choisi le Mc Bacon.\n");
      break;
    case 4:
      printf("Tu as choisi le menu Big Mac.\n");
      break;

    default:
      printf("Choix invalide\n");
      break;
    }
  return 0;
}

