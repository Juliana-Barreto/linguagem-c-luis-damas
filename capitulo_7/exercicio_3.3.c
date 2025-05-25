/*Implemente em C a seguinte função: char *strpack(char *s).
Recebe uma string e compacta num único caractere qualquer conjunto de caracteres repetidos consecutivos.*/

#include <stdio.h>
#include <string.h>

char *strpack(char *s) {
  int i, j = 0;
  for (i = 1; s[i] != '\0'; i++) {
    // Se o caractere atual for diferente do último armazenado
    if (s[i] != s[j])
    // Incrementa j primeiro, depois armazena o novo caractere
      s[++j] = s[i];
  }
  s[++j] = '\0';
  return s;
}

int main() {
  char s[101];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  printf("String compactada: %s\n", strpack(s));
  return 0;
}