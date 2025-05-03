/* Escreva um programa que solicite ao usuário dois números inteiros entre 
0 e 255 e escreva na tela todos os caracteres da tabela ASCII cujos códigos
variem entre os dois números introduzidos, escrevendo em cada linha o código
ASCII e o caractere correspondente. */

#include <stdio.h>

int main() {
    int i, num1, num2, aux;
    do {
    printf ("Insira um número entre 0 e 255: ");
    scanf ("%d", &num1);
    } while (num1 < 0 || num1 > 255);
    do {
    printf ("Insira um outro número entre 0 e 255: ");
    scanf ("%d", &num2);
    } while (num2 < 0 || num2 > 255);
    // Verifica e ordena os números (garante que num1 <= num2)
    if (num2 < num1) {
        aux = num1; // Guarda o valor de num1 temporariamente
        num1 = num2; // num1 recebe o menor valor (num2)
        num2 = aux; // num2 recebe o valor original de num1 (maior valor)
    }
    for (i = num1; i <= num2; i++)
        printf ("%3d = %c\n", i, (char)i);
}
    