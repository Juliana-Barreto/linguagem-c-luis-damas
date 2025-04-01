/* Escreva um programa que solicite um número ao usuário
até que o valor deste esteja entre os valores 1 e 100 */

#include <stdio.h>

int main () {
    int num;
    do{
        printf("Introduza um número: ");
        scanf ("%d", &num);
    }
    while (num < 1 || num > 100);
}