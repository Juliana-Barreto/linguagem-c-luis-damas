/*Implemente em C a seguinte função: char *allspaces(char *s). 
Substitui todos os caracteres da string s por espaços em branco.*/

#include <stdio.h>

char *allspaces(char *s) {
  for(int i = 0; s[i] != '\0'; i++)
    s[i] = ' ';
  return s;
}
int main () {
  char s[100];
  printf("Insira uma string (máximo 99 caracteres): ");
  gets(s);
  printf("String modificada: '%s'\n", allspaces(s));
}