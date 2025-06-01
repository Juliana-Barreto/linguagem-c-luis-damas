/* Implemente a seguinte função que manipula apenas valores inteiros: add1. 
Adiciona 1 ao próprio parâmetro n.*/

#include <stdio.h>

int add1 (int *n) {
  return ++(*n);
}

int main () {
  int n;
  printf("Insira um número: ");
  scanf("%d", &n);
  printf("O valor incrementado em 1 é: %d\n", add1(&n));
  return 0;
}