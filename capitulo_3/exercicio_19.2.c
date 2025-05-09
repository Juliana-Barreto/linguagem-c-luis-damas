/* Escreva um programa que indique o número de dias existentes em um mês
(fevereiro = 28 dias), usando apenas o switch */

#include <stdio.h>

int main () {
    int mes, dias;
    printf("Digite o número do mês (1 à 12): ");
    scanf("%d", &mes);
    if (mes < 1 || mes > 12) {
        printf("Mês inválido.\n");
        return 1;
    }
    switch (mes) {
        // Meses com 31 dias (janeiro, março, maio, julho, agosto, outubro, dezembro)
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12 : dias = 31; break;
        // Meses com 30 dias (abril, junho, setembro, novembro)
        case 4:
        case 6:
        case 9:
        case 11: dias = 30; break;
        // Caso padrão (fevereiro) - considera 28 dias (não trata anos bissextos)
        default : dias = 28;
    }
    printf ("O mes %d tem %d dias", mes, dias);        
}