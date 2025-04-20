/* Implemente a seguinte função: float(float v[], int n).
Recebe um vetor de números reais e o número de elementos a considerar. 
Retorna o maior número entre os n primeiros elementos do vetor.*/

#include <stdio.h>

float MaiorValor(float v[], int n) {
  int i;
  float maior = v[0];
  for (i=1; i<n; i++){
    if (v[i]> maior)
      maior = v[i];
  }
  return maior;
}
int main() {
  int n, i;
  float maior;
  printf("Quantos números deseja verificar? ");
  scanf("%d", &n);
  float v[n];
  for (i=0; i<n; i++) {
    printf("Insira o %dº número: ", i + 1);
    scanf ("%f", &v[i]);
  }
  maior = MaiorValor(v, n);
  printf("O maior valor entre os %d números é %.2f\n", n, maior);
}