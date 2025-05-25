/*Implemente em C a seguinte função: char *lower_upper(char *s). 
Recebe uma string de caracteres alfabéticos e coloca todos os caracteres em minúsculas, alinhados à
esquerda, pela mesma ordem que aparecem. Os que estão em maiúsculas são alinhados, à direita.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *lower_upper(char *s) {
  char esquerda[101], direita[101];
  int i, e = 0, d = 0;
  for(i = 0; s[i] != '\0'; i++) {
    if (islower(s[i]))
      esquerda[e++] = s[i];
    else
      direita[d++] = s[i];
  }
  esquerda[e] = '\0';
  direita[e] = '\0';
  // Copia o conteúdo de 'esquerda' e 'direita' de volta para 's'
  strcpy(s, esquerda);
  strcat(s, direita);
  return s;
}
int main () {
  char s[101];
  printf("Insira uma string (máximo 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  printf("String modificada: '%s'\n", lower_upper(s));
}