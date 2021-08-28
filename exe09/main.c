#include <stdio.h>
#include <string.h>


void placar_possiveis_rec(char placar [], int m, int n, int pos) {

  if ( m == 0 && n == 0) {
    placar [pos] = '\0';
    printf ("%s\n", placar);
  } else { 
    if (m > 0) { 
       placar [pos] = 'A';
       placar_possiveis_rec (placar, m-1, n, pos+1);
    }
    if (n > 0) { 
       placar [pos] = 'B';
       placar_possiveis_rec (placar, m, n-1, pos+1);
    }
  } 
}

void placar_possiveis (int m, int n) {
  char placar [100];
  placar_possiveis_rec (placar, m, n, 0);
}


int main (void) {
   int m, n;
   scanf ("%d %d", &m, &n);
   placar_possiveis (m,n);
   return 0;
}
