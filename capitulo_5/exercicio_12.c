/* Implemente a seguinte função: int is_square(int x, int y).
Devolve um valor lógico que indica se x é ou não igual a y². */

#include <stdio.h>

int is_square(int x, int y) {
  return x==y*y;
}
int main(){
  int x, y;
  printf("Insira um número: ");
  scanf("%d", &x);
  printf("Insira a raiz quadrada de %d: ", x);
  scanf("%d", &y);
  if (is_square(x, y))
    printf("Certo, pois %d² = %d\n", y, x);
  else
    printf("Resposta errada!\n");
}