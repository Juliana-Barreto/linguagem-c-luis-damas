/* Implemente a seguinte função que manipula apenas valores inteiros: iszero. 
Verifica se o parâmetro n é ou não zero.*/

#include <stdio.h>

int iszero(int n) {
  return n == 0;
}

int main() {
  int n;
  printf("Insira um número: ");
  scanf("%d", &n);
  if (iszero(n)) {
    printf("O número é zero.\n");
  } else {
    printf("O número não é zero.\n");
  }
  return 0;
}