/* Escreva um programa que indique o número de dias existentes em um mês,
usando apenas a instrução if-else */

#include <stdio.h>

int main ()
{
    int mes, ano;

    printf("Digite o mês: ");
    scanf("%d", &mes);
    if (mes < 1 || mes > 12) {
        printf("Mês inválido.\n");
        return 1;}

    printf("Digite o ano: ");
    scanf("%d", &ano);
    if (ano < 0) {
        printf("Ano inválido.\n");
        return 1;}
}