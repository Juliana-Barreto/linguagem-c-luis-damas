/*Implemente em C a seguinte função: char *Prox_Char(char *s). 
Coloca em cada posição da string s o próximo caractere ASCII.*/

#include <stdio.h>
#include <string.h>

char *Prox_Char(char *s) {
  for (int i = 0; s[i] != '\0'; i++) {
    s[i] = s[i] + 1;
  }
  return s;
}

int main() {
  char s[101];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  printf("String modificada: %s\n", Prox_Char(s));
  return 0;
}