#include <stdio.h>
#include "functions.h"

int main() {

  int v [1000];
  int n = 0;

  scanf ("%d", &n);

  for (int i=0; i<n; i++) {
    scanf ("%d", &v[i]);
  }

  printf ("MENOR = %d\n", menor(v,n));

  return 0;
  
}