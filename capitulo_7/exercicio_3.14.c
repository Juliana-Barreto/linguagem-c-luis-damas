/*Implemente em C a seguinte função: char *wordupr(char *s). 
Recebe uma string, coloca a primeira letra de cada palavra em maiúscula e o restante em minúsculas.
Supõe-se que a separação entre as palavras é realizada por espaços em branco.*/

#include <stdio.h>
#include <ctype.h>

char *wordupr(char *s) {
  s[0] = toupper(s[0]);
  for(int i = 1; s[i] != '\0'; i++)
    if (s[i-1] == ' ')
      s[i] = toupper(s[i]);
    else
      s[i] = tolower(s[i]);
  return s;
}
int main () {
  char s[100];
  printf("Insira uma string (máximo 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  printf("String modificada: '%s'\n", wordupr(s));
}