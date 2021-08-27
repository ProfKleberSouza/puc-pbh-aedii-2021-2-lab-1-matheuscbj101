#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main () {
  int x;
  int n;
  int valor;
  scanf ("%d", &x);
  scanf ("%d", &n);
  valor = potencia (x, n);
  printf ("%d", valor);
  return 0;
}