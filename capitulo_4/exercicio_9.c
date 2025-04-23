/* Altere o programa anterior de forma que, em vez de asteriscos,
sejam escritas letras em cada nível, começando o nível inicial 
com a letra 'A'*/

#include <stdio.h>

int main() {
    int i, j, num;
    printf ("Insira o número de ramos: ");
    scanf ("%d", &num);
    for (i = 1; i <= num; i++){
        for (j = 1; j <= i; j++)
            putchar('A'+ i - 1);
    putchar('\n');
    }
}