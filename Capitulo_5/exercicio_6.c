/* Implemente a seguinte função:
long int n_segundos(int n_horas)
Devolve o número de segundos existente em um conjunto de horas. */

#include <stdio.h>
long int n_segundos(int n_horas) {
    return n_horas * 3600;
}
int main () {
    int n_horas; 
    long res;
    printf("Insira a quantidade de horas: ");
    scanf("%d", &n_horas);
    res = n_segundos(n_horas);
    printf("%d horas são %ld segundos\n", n_horas, res);
}
