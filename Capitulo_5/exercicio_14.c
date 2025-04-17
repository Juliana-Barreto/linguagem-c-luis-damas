/* Implemente a seguinte função: int is_special(int x).
Devolve um valor lógico que indica se o dobro de x é ou não igual a x². */

#include <stdio.h>

int is_special(int x) {
  return 2*x==x*x;
}
int main(){
  int x;
  printf("Insira um número: ");
  scanf("%d", &x);
  if (is_special(x))
    printf("%d é especial, pois 2.%d = %d².\n", x, x, x);
  else
    printf("%d não é especial.\n", x);
}