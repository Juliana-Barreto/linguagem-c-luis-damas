/* Implemente a seguinte função: int Ímpar(int x).
Devolve verdade se x for ímpar. Falso, no caso contrário.*/

#include <stdio.h>

int Ímpar(int x) {
    if (x % 2 == 0)
        return 0;
    else
        return 1;
}

int main() {
    int x;
    printf("Insira um número: ");
    scanf("%d", &x);
    if (Ímpar(x))
        printf ("%d é ímpar\n", x);
    else
        printf ("%d não é ímpar\n", x);
}