/* Implemente a seguinte função: void transpor(int v[MAX][MAX]).
Que transpõe a matriz v com MAX por MAX elementos.*/

#include <stdio.h>
#define MAX 5
void ImprimirMatriz(int v[MAX][MAX]) {
  int i, j;
  for (i = 0; i < MAX; i++) {
    for (j = 0; j < MAX; j++) {
      printf("%3d", v[i][j]);
    }
  printf("\n");
  }
}
void transpor(int v[MAX][MAX]){
  int aux, i, j;
  for (i = 0; i < MAX; i++) {
    for (j = i+1; j < MAX; j++) {
      aux = v[i][j];
      v[i][j] = v[j][i];
      v[j][i] = aux;
    }
  }  
}
int main() {
  int v[MAX][MAX], i, j;
  for (i = 0; i < MAX; i++) {
    for (j = 0; j < MAX; j++) {
      v[i][j] = i *10 + j;
    }
  }
  printf("\nMATRIZ ORIGINAL\n");
  ImprimirMatriz(v);
  printf("\nMATRIZ TRANSPOSTA\n");
  transpor(v);
  ImprimirMatriz(v);
}