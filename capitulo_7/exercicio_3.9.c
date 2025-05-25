/*Implemente em C a seguinte função: char *UpDown(char *s). 
Coloca os caracteres da string s alternadamente em Maiúsculas e Minúsculas.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *UpDown(char *s) {
  for(int i = 0; s[i] != '\0'; i++)
    s[i] = (i % 2 == 0) ? toupper(s[i]) : tolower(s[i]);
  return s;
}

int main() {
  char s[101];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  printf("String modificada: '%s'\n", UpDown(s));
  return 0;
}