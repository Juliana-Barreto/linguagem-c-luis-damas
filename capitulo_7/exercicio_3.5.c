/*Implemente em C a seguinte função: char *xspace(char *s). 
Coloca um espaço depois de cada caractere NÃO ESPAÇO na string s.*/

#include <stdio.h>
#include <string.h>
#define SPACE ' '

// Conta quantas vezes um caractere aparece na string
int strcountc (char *s, char c) {
  int i, cont = 0;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == c)
      cont++;
  }
  return cont;
}
char *xspace (char *s) {
  int tam = strlen(s), cont = strcountc(s, SPACE), novo_tam = tam + (tam - cont), j = --novo_tam;
  s[novo_tam] = '\0';
  // Processa a string de trás para frente
  for (int i = --tam; i >= 0; i--) {
    s[j--] = s[i];
    //Se não for espaço, adiciona espaço antes
    if(s[i] != SPACE) {
      s[j--] = SPACE;
    }
  }
  return s;                                                                                     
}
int main () {
  char s[200];
  printf("Insira uma string (máximo 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  printf("String modificada: %s\n", xspace(s));
}