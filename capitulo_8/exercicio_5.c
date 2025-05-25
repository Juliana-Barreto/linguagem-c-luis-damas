/*Implemente em C a seguinte função: char *First_Vogal(char *s)
Retorna o endereço em que ocorre a primeira vogal na string s. Caso não exista, retorna NULL.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *First_Vogal(char *s) {
  char *ptr, vogal[] = {'a', 'e', 'i', 'o', 'u'};
  for (ptr = s; *ptr != '\0'; ptr++) {
   for (int i = 0; i < 5; i++)
    if (tolower(*ptr) == vogal[i])
      return ptr;
  }
  return NULL;
}

int main () {
  char s[101];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  char *resultado = First_Vogal(s);
  if (resultado != NULL) {
    printf("O endereço da primeira vogal é: %p\n", resultado);
  } 
  else {
    printf("Não há vogais na string\n");
  }
}