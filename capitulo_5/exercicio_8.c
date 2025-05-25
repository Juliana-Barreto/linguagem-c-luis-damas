/* Implemente a seguinte função: float Max(float x, float y, float w).
Devolve o maior dos valores x, y, w*/

#include <stdio.h>

float Max(float x, float y, float w) {
    if (x > y && x > w)
        return x;
    else
        if (y > x && y > w)
            return y;
        else
                return w;
}

int main() {
    float x, y, w;
    printf("Insira o primeiro número: ");
    scanf("%f", &x);
    printf("Insira o segundo número: ");
    scanf("%f", &y);
    printf("Insira o último número: ");
    scanf("%f", &w);
    if (x == y && x==w)
        printf("Os números são iguais\n");
    else
        printf("O maior número é o %.2f\n", Max(x, y, w));
}