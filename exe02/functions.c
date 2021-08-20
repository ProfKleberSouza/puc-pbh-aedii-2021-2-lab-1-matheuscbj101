#include "functions.h"

int menor (int v[], int n) {
  int menor = v[0];
  for (int i=1;i<n;i++) {
    if (v[i] < menor) {
      menor = v[i];
    }
  }
  return menor;
}