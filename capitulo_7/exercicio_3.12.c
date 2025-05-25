/*Implemente em C a seguinte função: char *strduplica(char *s). 
Recebe uma string e duplica seu conteúdo.*/

#include <stdio.h>
#include <string.h>

char *strduplica(char *s) {
  int i = strlen(s), j = 2 * i;
  s[j] = '\0';
  for(i--; i >= 0; i--) {
    s[--j] = s[i];
    s[--j] = s[i];
  }
  return s;
}
int main () {
  char s[201];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  printf("String duplicada: '%s'\n", strduplica(s));
}