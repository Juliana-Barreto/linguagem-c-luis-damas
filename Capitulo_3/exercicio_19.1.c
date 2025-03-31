/* Escreva um programa que indique o número de dias existentes em um mês
(fevereiro = 28 dias), usando apenas a instrução if-else */

#include <stdio.h>

int main ()
{
    int mes, dias;
    printf("Digite o número do mês (1 à 12): ");
    scanf("%d", &mes);
    if (mes < 1 || mes > 12) {
        printf("Mês inválido.\n");
        return 1;
    }
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        dias = 31;
    else 
        if (mes==4 || mes==6 || mes== 9 || mes==11) 
            dias = 30;
        else  
            dias = 28;
    printf("O mês %d possui %d dias", mes, dias);
}