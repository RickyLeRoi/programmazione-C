//trova il fattoriale del numero scelto

#include<stdio.h>

long factorial(int);

int main()
{
  int n;
  long f;

  printf("inserisci un numero per trovarne il fattoriale\n");
  scanf("%d", &n);

  if (n < 0)
    printf("solo interi positivi.\n");
  else
  {
    f = factorial(n);
    printf("%d! = %ld\n", n, f);
  }

  return 0;
}

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
