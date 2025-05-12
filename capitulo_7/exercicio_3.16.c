/*Implemente em C a seguinte função: char *All_Big(char *s). 
Recebe uma string e deixa-lhe apenas os caracteres maiúsculos.*/

#include <stdio.h>
#include <ctype.h>

char *All_Big(char *s) {
  int i, j = 0;
  for(i = 0; s[i] != '\0'; i++){
    if (isupper(s[i]))
      s[j++] = s[i];
  }
  s[j] = '\0';
  return s;
}
int main () {
  char s[100];
  printf("Insira uma string (máximo 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  printf("String modificada: '%s'\n", All_Big(s));
}