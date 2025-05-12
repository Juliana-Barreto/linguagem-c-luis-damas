/*Implemente em C a seguinte função: char *UpDown(char *s). 
Coloca os caracteres da string s alternadamente em Maiúsculas e Minúsculas.*/

#include <stdio.h>
#include <ctype.h>

char *UpDown(char *s) {
  for(int i = 0; s[i] != '\0'; i++)
    s[i] = (i % 2 == 0) ? toupper(s[i]) : tolower(s[i]);
  return s;
}
int main () {
  char s[100];
  printf("Insira uma string (máximo 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  printf("String modificada: '%s'\n", UpDown(s));
}