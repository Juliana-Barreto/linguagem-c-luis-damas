/*Implemente em C a seguinte função: char *strstr(char *str1, char *str2). 
Retorna o endereço de str1 em que ocorre pela primeira vez a substring str2. 
Caso não exista, retorna NULL.*/

#include <stdio.h>
#include <string.h>

char *minha_strstr(char *str1, char *str2) {
  char *inicio, *p1, *p2;
  if (*str2 == '\0')
    return str1;
  for (p1 = str1; *p1 != '\0'; p1++) {
    // Guarda o endereço inicial de uma possível correspondência
    inicio = p1;
    if (*p1 == *str2) {
      p2 = str2;
      while (*p1 == *p2 && *p2 != '\0') {
        p1++;
        p2++;
      }
      // Se chegou ao final da substring, encontrou uma correspondência completa
      if (*p2 == '\0')
        return inicio;
      // Se não, volta p1 para a posição inicial para continuar a busca
      p1 = inicio;
    }
  }
  // Se não encontrou nenhuma correspondência, retorna NULL
  return NULL;
}
int main () {
  char str1[100], str2[100];
  printf("Insira uma string (máximo 99 caracteres): ");
  fgets(str1, sizeof(str1), stdin);
  str1[strcspn(str1, "\n")] = 0;
  printf("Insira a substring: ");
  fgets(str2, sizeof(str2), stdin);
  str2[strcspn(str2, "\n")] = 0;
  printf("O endereço da substring é: %p\n", minha_strstr(str1, str2));
}

