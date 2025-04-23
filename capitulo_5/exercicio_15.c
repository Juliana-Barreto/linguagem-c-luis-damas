/* Implemente a seguinte função: int Cubo(int x).
Devolve o valor de x³. */

#include <stdio.h>

int Cubo(int x) {
  return x*x*x;
}
int main(){
  int x;
  printf("Insira um número: ");
  scanf("%d", &x);
  printf("%d³ = %d\n", x, Cubo(x));
}