/* Escreva um programa que solicite ao usuário uma determinada data 
e a mostre em seguida no formado dd/mm/aaaa */

#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    if (dia < 1 || dia > 31){
        printf("Dia inválido\n");
        return 1;}   

    printf("Digite o mês: ");
    scanf("%d", &mes);
    if (mes < 1 || mes > 12){
        printf("Mês inválido\n");
        return 1;}

    printf("Digite o ano: ");
    scanf("%d", &ano);
    if (ano < 1) {
        printf("Ano inválido\n");
        return 1;}

    printf ("A data digitada foi: %d/%d/%d\n", dia, mes, ano);
}