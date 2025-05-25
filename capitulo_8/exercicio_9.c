/*Implemente a seguinte função: char * StrDelStr(char *s1,char *s2).
Apaga em sl a primeira ocorrência de s2.*/

#include <stdio.h>
#include <string.h>

char * StrDelStr(char *s1,char *s2) {
  char *inicio_s2 = strstr(s1, s2);
  if (inicio_s2 != NULL) {
    // Calcula onde começa o resto da string após s2
    char *restante = inicio_s2 + strlen(s2);
    // Copia o resto da string para a posição onde s2 começava
    strcpy(inicio_s2, restante);
  }
  return s1;
}

int main () {
  char s1[101], s2[101];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s1, sizeof(s1), stdin);
  s1[strcspn(s1, "\n")] = '\0';
  printf("Insira uma substring: ");
  fgets(s2, sizeof(s2), stdin);
  s2[strcspn(s2, "\n")] = '\0';
  printf("A string resultante é: %s\n", StrDelStr(s1, s2));
  return 0;
}