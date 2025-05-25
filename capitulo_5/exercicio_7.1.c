/* Implemente a seguinte função: long int num(int n_horas).
Devolve o número de segundos existente em um conjunto de horas. 
Resolver com if-else */

#include <stdio.h>

long int num(int n_horas, char tipo) {
    if (tipo == 'm')
    return n_horas * 60;
    else {
        if (tipo == 's' )
            return n_horas * 3600;
        else 
            return n_horas;
    }
}

int main () {
    int n_horas; 
    char tipo;
    long res;
    printf("Insira a quantidade de horas: ");
    scanf("%d", &n_horas);
    printf("Deseja converter em horas ('h'), minutos ('m') ou segundos ('s')? ");
    scanf (" %c", &tipo);
    res = num(n_horas, tipo);
    printf("%d horas em são %ld %c\n", n_horas, res, tipo);
}