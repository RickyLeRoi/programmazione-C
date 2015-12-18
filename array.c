//crea un array di x elementi e cerca elementi all'interno

#include <stdio.h>

int main()
{
   int array[100], cerca, c, n, count = 0;

   printf("inserisci il numero di elementi dell'array\n");
   scanf("%d", &n);

   printf("inserisci %d numeri\n", n);

   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);

   printf("inserisci il numero da cercare\n");
   scanf("%d", &cerca);

   for (c = 0; c < n; c++) {
      if (array[c] == cerca) {
         printf("%d è presente in posizione %d.\n", cerca, c+1);
	 count++;
      }
   }
   if (count == 0)
      printf("%d non e' presente nell'array'.\n", cerca);
   else
      printf("%d e' presente %d volte nell'array.\n", cerca, count);

   return 0;
}
