#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  const int VALEUR_MIN = 1, VALEUR_MAX = 100, TENTATIVE_MAX = 5; // Déclaration de TENTATIVE_MAX
    char choix = ' ';
    
    do
    {
        int nombre_mystere = 0, nombre_utilisateur = 0, i = 0, tentative_user = TENTATIVE_MAX;

        // Génération d'un nombre aléatoire
        srand(time(NULL));
        nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;

        printf("\tTP6: Les Boucles\n");
        printf("Devinez quel est le nombre mystère. Indice: c'est un nombre entre %d et %d, vous avez %d chances.\n", VALEUR_MIN, VALEUR_MAX, TENTATIVE_MAX);

        // Boucle principale
        do
        {
          printf("Rentrez un nombre entier entre %d et %d, attention vous avez %d chance(s) :\n", VALEUR_MIN, VALEUR_MAX, tentative_user);
            scanf("%d", &nombre_utilisateur);

            // Vérification de la validité de l'entrée
            if (nombre_utilisateur < VALEUR_MIN || nombre_utilisateur > VALEUR_MAX) {
                printf("Veuillez entrer un nombre valide dans la plage.\n");
                continue; // Recommencer sans réduire les tentatives
            }

            i++;
            tentative_user--;

            // Vérification du nombre
            if (nombre_utilisateur < nombre_mystere)
            {
                printf("C'est plus, tu peux augmenter.\n");
            }
            else if (nombre_utilisateur > nombre_mystere)
            {
                printf("C'est moins, vous pouvez baisser.\n");
            }
            else
            {
                printf("Bingo! Tu as trouvé le nombre mystère en %d tentatives.\n", i);
                break;
            }

            // Vérification si l'utilisateur a épuisé toutes ses tentatives
            if (tentative_user == 0)
            {
                printf("Vous avez tenté toutes vos chances. Le nombre mystère était %d.\n", nombre_mystere);
            }
            else
            {
                printf("Il vous reste %d chance(s).\n", tentative_user);
            }
        } while(tentative_user > 0); // Boucle tant qu'il reste des tentatives

	// Demander à l'utilisateur s'il veut rejouer
        printf("Voulez-vous jouer à nouveau ? (O/n) : \n");
        scanf(" %c", &choix);

    } while (choix == 'o' || choix == 'O'); // Rejouer si l'utilisateur le souhaite

    return 0;
}
