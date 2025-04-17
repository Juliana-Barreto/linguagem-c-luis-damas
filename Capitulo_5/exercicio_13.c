/* Implemente a seguinte função: int Minus(Valor).
Devolve o valor recebido sempre como número negativo. */

#include <stdio.h>

int Minus(int Valor) {
  if (Valor > 0)
    return -Valor;
  else
    return Valor;
}
int main(){
  int Valor;
  printf("Insira um número: ");
  scanf("%d", &Valor);
  printf("O negativo de %d é %d\n", Valor, Minus(Valor));
}