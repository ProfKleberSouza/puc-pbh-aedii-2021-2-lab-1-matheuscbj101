#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior) {
  int mai = v[0];
  int men = v[0];

  for (i=1; i<n; i++) {
    if (v[i] < menor) {
      men = v[i];
    }
    if (v[i] > maior) {
      mai = v [i];
    }
  }
  
  *menor = men;
  *maior = mai;
}