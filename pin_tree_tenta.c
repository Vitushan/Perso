#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  const int CODE_PIN = 3300, NMBRE_MAX = 3;
  int saisie_user = 0, tentative_user = NMBRE_MAX;

do
  { //lecture de saisie user
    printf("\tTaper votre code PIN a 4 chiffres:\n");
    scanf("%d", &saisie_user);
    //verification du code pin
	    if(saisie_user == CODE_PIN)
             printf("\tTéléphone déverouiller\n");
		
            else
	      printf("code pin erroné,il vous reste %d tentatives.\n",--tentative_user);
	      
   }while (saisie_user != CODE_PIN && tentative_user > 0);
  
  return 0;
}
