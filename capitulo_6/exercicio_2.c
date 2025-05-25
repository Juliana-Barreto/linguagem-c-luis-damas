/* Implemente a seguinte função: float(float v[], int n).
Recebe um vetor de números reais e o número de elementos a considerar. 
Retorna o maior número entre os n primeiros elementos do vetor.*/

#include <stdio.h>

float MaiorValor(float v[], int n) {
  int i;
  float maior = v[0]; // Assume primeiro elemento como o maior inicialmente
  for (i=1; i<n; i++){
    if (v[i]> maior)
      maior = v[i]; // Atualiza o maior valor quando encontra um maior
  }
  return maior;
}

int main() {
  int n, i;
  float maior;
  printf("Quantos números deseja verificar? ");
  scanf("%d", &n);
  float v[n]; // Declara vetor com tamanho informado
  // Preenche o vetor com os valores digitados
  for (i=0; i<n; i++) {
    printf("Insira o %dº número: ", i + 1);
    scanf ("%f", &v[i]);
  }
  maior = MaiorValor(v, n);
  printf("O maior valor entre os %d números é %.2f\n", n, maior);
}