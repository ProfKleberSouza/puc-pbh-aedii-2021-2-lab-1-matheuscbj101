#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_palindromo_rec (char texto [], int i, int f) {
 if (i >= f) { 
 return true;
 }
 if (texto [i] != texto [f]) {
   return false;
 }
 i++;
 f--;
 return is_palindromo_rec (texto, i, f);
}

bool is_palindromo (char texto []) {
  return is_palindromo_rec (texto, 0, strlen(texto)-1);
}

int main(void) {  
 char texto[50] = "acbca";
 scanf ("%s", texto);
 if (is_palindromo(texto)) {
   printf ("SIM");
 }
 else {
   printf ("NAO");
   }  
}