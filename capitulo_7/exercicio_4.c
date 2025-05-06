/*Escreva um programa que leia os nomes completos do teclado e os escreva na tela no 
formato Sobrenome, Nome sem Sobrenome*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ESPACO ' '

int strcountc (char *s, char c) {
  int i, cont = 0;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == c)
      cont++;
  }
  return cont;
}
char *wordupr(char *s) {
  s[0] = toupper(s[0]);
  for(int i = 1; s[i] != '\0'; i++)
    if (s[i-1] == ' ')
      s[i] = toupper(s[i]);
    else
      s[i] = tolower(s[i]);
  return s;
}
char separador(char *nome_completo) {
  char nome[99], sobrenome[99];
  int i, j, k = 0;
  for (i = 0; nome_completo[i] != ' '; i++) {
    nome[i] = nome_completo[i];
  }
  nome[i] = '\0';
  for (j = strlen(nome) + 1; nome_completo[j] != '\0'; j++) {
    sobrenome[k++] = nome_completo[j];
  }
  sobrenome[k] = '\0';
  printf("%s, %s", wordupr(sobrenome), wordupr(nome));
}
int main() {
  char nome_completo[99];
  int cont;
  do {
    printf("Insira o seu nome completo: ");
    gets(nome_completo);
    cont = strcountc (nome_completo, ESPACO);
    if (cont < 1)
    printf("Resposta inválida. Deve incluir o seu sobrenome.\n");
  } while (cont < 1);
  separador(nome_completo);
}