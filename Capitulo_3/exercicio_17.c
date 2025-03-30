/* Escreva um programa, usando switch, que leia um número inteiro e
indique se esse inteiro é ou não igual a zero */

#include <stdio.h>

int main() 
{
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    switch (num) {
        case 0:
            printf("O número é igual a zero.\n");
            break;
        default:
            printf("O número é diferente de zero.\n");}
}