/* Implemente a função int Ler Inteiro(char *prompt) que devolve o inteiro lido. 
O parâmetro prompt contém a mensagem que solicita o inteiro ao usuário. 
Deverá receber apenas inteiros superiores ou iguais a zero.*/

#include <stdio.h>

 int Ler_Inteiro(char *prompt, int *n) {
  do {
    printf("%s", prompt);
    scanf("%d", n);
    if (*n <= 0) {
      printf("Por favor, digite um número maior ou igual a zero!\n");
    }
  } while (*n <= 0);
  return *n;
}

int main () {
  int idade, altura;
  idade = Ler_Inteiro("Insira a sua idade: ", &idade);
  printf("A sua idade é: %d anos\n", idade);
  altura = Ler_Inteiro("Insira a sua altura em cm: ", &altura);
  printf("A sua altura é: %d cm\n", altura);
  return 0;
}