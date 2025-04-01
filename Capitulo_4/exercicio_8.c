/* Escreva um programa que coloque na tela meia árvore de natal com 
asteriscos.O número de ramos deve ser definido pelo usuário.*/

#include <stdio.h>

int main() {
    int i, j, num;
    printf ("Insira o número de ramos: ");
    scanf ("%d", &num);
    for (i = 1; i <= num; i++){
        for (j = 1; j <= i; j++)
            putchar('*');
    putchar('\n');
    }
}