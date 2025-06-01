/* Escreva, de forma iterativa e recursiva, a função de Fibonacci.
"Fibonacci é uma sequência numérica infinita em que cada termo a partir do terceiro é a soma dos dois termos anteriores.
Os dois primeiros termos são 1.*/
 
#include <stdio.h>

// Array para armazenar os resultados e evitar a repetição de cálculos
long int memo[1000] = {0};

// Função iterativa para calcular o n-ésimo termo da sequência de Fibonacci
long int fibonacci_iterativo(int n) {
  long int n1 = 1, n2 = 1, tmp = 1;
  // Os dois primeiros termos são 1
  if (n <= 1) {
    return 1;
  }
  // Calcula o n-ésimo termo partindo do terceiro termo
  for (int i = 2; i <= n; i++) {
    tmp = n1;
    n1 = n2;
    n2 = tmp + n1;
  }
  return n2;
}

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
long int fibonacci_recursivo(int n) {
  if (n <= 1) {
    return 1;
  if (memo[n] != 0)
    return memo[n];
  } 
  // Calcula e armazena o enésimo termo, dado pela soma dos dois anteriores
  memo[n] = fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2);
  return memo[n];
}

int main(){
  int limite;
  do {
    printf("Insira um número limite de termos: ");
    scanf("%d", &limite);
    if (limite < 1)
      printf("Insira um número maior que zero.\n");
  } while (limite < 1);
  printf("Fibonacci calculado de forma iterativa:");
  for (int n = 0; n < limite; n++) {
    printf(" %ld", fibonacci_iterativo(n));
  }
  printf("\nFibonacci calculado de forma recursiva:");
  for (int n = 0; n < limite; n++) {
    printf(" %ld", fibonacci_recursivo(n));
  }
  printf("\n");
  return 0;
}