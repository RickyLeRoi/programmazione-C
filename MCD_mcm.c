// trova il massimo comun divisore e il minimo comune multiplo di una coppia di numeri

#include <stdio.h>

long gcd(long, long);

int main() {
  long x, y, MCD, mcm;

  printf("inserisci due numeri interi\n");
  scanf("%ld%ld", &x, &y);

  MCD = gcd(x, y);
  mcm = (x*y)/MCD;

  printf("Massimo comune divisore di %ld e %ld = %ld\n", x, y, MCD);
  printf("Minimo comune multiplo di %ld e %ld = %ld\n", x, y, mcm);

  return 0;
}

long gcd(long x, long y) {
  if (x == 0) {
    return y;
  }

  while (y != 0) {
    if (x > y) {
      x = x - y;
    }
    else {
      y = y - x;
    }
  }

  return x;
}
