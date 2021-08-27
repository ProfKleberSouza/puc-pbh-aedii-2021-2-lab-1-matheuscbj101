#include <stdio.h>
#include <string.h>
#include "functions.h"

void inverte (char texto[]) {
int ini = 0;
int fin = strlen(texto)-1;
int tam_troca = strlen(texto)/2;
char letra_salva [1];
for (int i = 1; i <= tam_troca; i++) {
  letra_salva [0] = texto [ini];
  texto [ini] = texto [fin];
  texto [fin] = letra_salva [0];
  ini ++;
  fin --;
}
printf ("%s", texto);
} 


int main() {
  char palavra [50];
  fgets (palavra, 50, stdin);
  inverte (palavra);
  return 0;
}