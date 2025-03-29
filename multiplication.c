#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  printf("\tTable de multiplication:\n");

  // Première boucle : pour chaque nombre de 1 à 10 (chaque table de multiplication) 
  for(int id_table = 1; id_table <= 10 ; id_table++)//code qui génére une table de multiplication
    {// Affiche le numéro de la table (par exemple, Table 1, Table 2, etc.)
  printf("\n Affichage de la table de multiplication: %d \n", id_table);
  // Deuxième boucle : pour chaque nombre de 0 à 10 (chaque ligne de la table)
  for(int ligne = 0; ligne <= 10; ligne++) //code qui calcul id_table x ligne.
    { //calcul et affiche le produit id_table x ligne
      printf("\t %d x %d = %d\n",id_table, ligne, id_table * ligne);
    }	    
    }
  return 0;
}
