/* Escreva um programa, de quatro formas diferentes, que leia um número inteiro e
indique se esse inteiro é ou não igual a zero */

// Quarta forma

#include <stdio.h>

int main() 
{
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    (num ==0) ? printf("O número é igual a zero.\n") : printf("O número é diferente de zero.\n");
}