/*Implemente em C a seguinte função: char *Transform(char *s). 
Recebe uma string e coloca toda a primeira metade em minúsculas e a segunda em maiúsculas.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *Transform(char *s) {
  int metade = strlen(s) / 2;
  for (int i = 0; s[i] != '\0'; i++) {
    if (i < metade)
      s[i] = tolower(s[i]);
    else
      s[i] = toupper(s[i]);
  }
  return s;
}

int main() {
  char s[101];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  printf("String transformada: %s\n", Transform(s));
  return 0;
}