/* Implemente a seguinte função que manipula apenas valores inteiros: zero.
Coloca zero no parâmetro n.*/

#include <stdio.h>

int zero (int *n) {
  return (*n)*10;
}

int main () {
  int n;
  printf("Insira um número: ");
  scanf("%d", &n);
  printf("O número acrescido de 0 é: %d\n", zero(&n));
  return 0;
}