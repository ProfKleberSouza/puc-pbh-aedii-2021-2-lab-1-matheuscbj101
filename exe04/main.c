#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void numero_vogais (char texto[]) {
  int a=0, e=0, i=0, o=0, u=0;
  int qnt = strlen (texto)-1;
  for (int j=0; j <= qnt; j++) {
    switch (texto[j]){
      case 'a': 
       a++;
      break;
      case 'e':
       e++;  
      break;
      case 'i': 
       i++; 
      break;
      case 'o':
       o++; 
      break;
      case 'u':
       u++; 
      break;
    }
  }
  printf (" A = %d\n E = %d\n I = %d\n O = %d\n U = %d\n", a, e, i, o, u);
}

int main() {
  char texto [50];
  fgets (texto, 50, stdin);
  numero_vogais(texto);
  return(0);
}