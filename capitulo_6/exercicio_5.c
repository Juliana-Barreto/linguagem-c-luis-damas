/* Implemente a seguinte função: char *memcpy(char *dest, char *orig, int n).
Que copia n caracteres do vetor origem (orig) para o vetor destino (dest) e
devolve o vetor dest.*/

#include <stdio.h>
#define N 5

char *memcpy(char *dest, char *orig, int n){
  int i;
  for (i = 0; i < n; i++) {
    dest[i] = orig[i];
  }
  return dest;
}

int main(){
  char orig[] = "Hello, world!";
  char dest[20];
  memcpy(dest, orig, N);
  printf("Origem: %s\n", orig);
  printf("Destino (%d): %s\n", N, dest);
}
