/*Implemente em C a seguinte função: char *strins(char *dest, char *orig)
Insere a string orig no início da string dest, retornando dest.*/

#include <stdio.h>
#include <string.h>

char *strins(char *dest, char *orig) {
  // Calcula o tamanho total necessário (dest + orig)
  int tam = strlen(dest) + strlen(orig);
  // Posiciona o terminador nulo no final da nova string
  dest[tam] = '\0';
  // i: índice da nova posição, j: índice da posição atual em dest
  for (int i = tam, j = strlen(dest); j >= 0; i--, j--) {
    dest[i] = dest[j];
  }
  // Copia os caracteres de orig para o início de dest
  for (int k = 0; orig[k] != '\0'; k++) {
    dest[k] = orig[k];
  }
  return dest;
}

int main () {
  char orig[101], dest[199];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(orig, sizeof(orig), stdin);
  orig[strcspn(orig, "\n")] = '\0';
  printf("Insira uma segunda string (máx. 99 caracteres):");
  fgets(dest, sizeof(dest), stdin);
  dest[strcspn(dest, "\n")] = '\0';
  printf("A string modificada é: %s\n", strins(dest, orig));
}