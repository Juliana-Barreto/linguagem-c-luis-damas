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
  printf("\n"); // Nova linha após cada linha da matriz
  }
}
void transpor(int v[MAX][MAX]){
  int aux, i, j;
  // Percorre apenas a parte superior da matriz (evita dupla troca)
  for (i = 0; i < MAX; i++) {
    for (j = i+1; j < MAX; j++) {
      aux = v[i][j]; // Armazena valor temporário
      v[i][j] = v[j][i]; // Troca linha por coluna
      v[j][i] = aux; // Completa a transposição
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