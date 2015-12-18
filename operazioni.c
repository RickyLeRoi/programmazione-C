// effettua le quattro operazioni fondamentali su una coppia di numeri data

#include <stdio.h>

int main()
{
   int a, b, som, sot, pro;
   float quo;

   printf("inserisci due interi\n");
   scanf("%d%d", &a, &b);

   som = a + b;
   sot = a - b;
   pro = a * b;
   quo = a / (float)b;   //typecasting

   printf("somma = %d\n",som);
   printf("differenza = %d\n",sot);
   printf("prodotto = %d\n",pro);
   printf("divisione = %.2f\n",quo);

   return 0;
}
