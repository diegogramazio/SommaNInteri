#include <stdio.h>

/* programma che chiede all'utente di inserire un intero positivo n e
 * poi n interi di cui l'applicazione stampa la somma. */

int main() {
      int n;                                 // numero di interi da leggere
      int numero;                       // un numero da leggere
      int somma;                  // somma corrente

      /* quanti interi? */
      printf("Quanti interi vuoi introdurre?\n");
      scanf("%d", &n);
      somma = 0;             // all'inizio la somma e' 0

      /* leggi n numeri e sommali a somma */
      for(int i=1;i<=n;i++) {
             /* INPUT */
             printf("Introduci un intero positivo, please.\n");
             scanf("%d", &numero);

             /* aggiorna la somma */
             somma += numero;
      }

      /* OUTPUT */
      printf("\nLa somma dei numeri introdotti e' %d.\n", somma);
      system("PAUSE");
}
