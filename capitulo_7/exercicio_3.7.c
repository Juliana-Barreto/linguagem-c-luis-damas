/*Implemente em C a seguinte função: char *Prox_Char(char *s). 
Coloca em cada posição da string s o próximo caractere ASCII.*/

#include <stdio.h>

char *Prox_Char(char *s) {
  for (int i = 0; s[i] != '\0'; i++) {
    s[i] = s[i] + 1;
  }
  return s;
}
int main () {
  char s[100];
  printf("Insira uma string (máximo 99 caracteres): ");
  gets(s);
  printf("String modificada: '%s'\n", Prox_Char(s));
}