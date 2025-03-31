/* Escreva um programa, de quatro formas diferentes, que leia um número inteiro e
indique se esse inteiro é ou não igual a zero */

// Terceira forma

#include <stdio.h>

int main() 
{
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num) // Se o número for diferente de zero retorna verdadeiro
        printf("O número é diferente de zero.\n"); 
    else // Se o número for igual a zero, retorna falso
        printf("O número é igual a zero.\n");
}