#include <stdio.h>
#include "functions.h"

int main() {
  
  int v [1000];
  int n = 0;
  int menor = 0, maior = 0;

  scanf ("%d", &n);

  for (int i=0; i<n; i++) {
    scanf ("%d", &v[i]);
  }

  menor_maior(v, n, &menor, &maior);

  printf ("MENOR = %d\n", menor);
  printf ("MAIOR = %d\n", maior);

  return 0;

}