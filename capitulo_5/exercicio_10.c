/* Implemente a seguinte função: int Entre (int x, int lim_inf, int lim_sup).
Verifica se x se encontra no intervalo lim_inf <= x <= lim_sup */

#include <stdio.h>

int Entre (int x, int lim_inf, int lim_sup) {
    return lim_inf <= x && x <= lim_sup;
}
int main() {
    int x, lim_inf, lim_sup;
    printf("Insira um valor: ");
    scanf("%d", &x);
    do {
        printf("Insira o limite inferior: ");
        scanf("%d", &lim_inf);
        if (lim_inf > x)
             printf("Erro! Insira um valor menor que %d\n", x);
    }
    while (lim_inf > x);
    do {
    printf("Insira o limite superior: ");
    scanf("%d", &lim_sup);
        if (lim_inf > lim_sup || lim_inf == lim_sup)
            printf("Erro! Insira um valor maior que %d\n", lim_inf);
    }
    while (lim_inf > lim_sup || lim_inf == lim_sup);
    if (Entre (x, lim_inf, lim_sup))
        printf("%d se encontra no intervalo [%d, %d]\n", x, lim_inf, lim_sup);
    else
        printf("%d não se encontra no intervalo [%d, %d]\n", x, lim_inf, lim_sup);
}