//Declare uma string com a capacidade de armazenar um nome com 25 caracteres.

#include <stdio.h>

int main() {
  char nome[27];
  printf("Insira um nome: ");
  fgets(nome, sizeof(nome), stdin);
  puts(nome);
  return 0;
}