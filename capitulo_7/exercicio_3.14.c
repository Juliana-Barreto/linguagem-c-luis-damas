/*Implemente em C a seguinte função: char *wordupr(char *s). 
Recebe uma string, coloca a primeira letra de cada palavra em maiúscula e o restante em minúsculas.
Supõe-se que a separação entre as palavras é realizada por espaços em branco.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *wordupr(char *s) {
  s[0] = toupper(s[0]);
  for(int i = 1; s[i] != '\0'; i++)
    if (s[i-1] == ' ')
      s[i] = toupper(s[i]);
    else
      s[i] = tolower(s[i]);
  return s;
}

int main() {
  char s[101];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  printf("String após converter: %s\n", wordupr(s));
  return 0;
}