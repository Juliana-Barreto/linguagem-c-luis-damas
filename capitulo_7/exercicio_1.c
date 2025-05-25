//Declare uma string com a capacidade de armazenar um nome com 25 caracteres.

#include <stdio.h>
#include <string.h>

int main() {
  char nome[27];
  printf("Insira um nome (máx. 25 caracteres): ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0';
  puts(nome);
  return 0;
}