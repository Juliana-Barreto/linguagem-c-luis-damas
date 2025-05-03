/* Escreva um programa que indique o número de dias existentes em um mês
(fevereiro = 28 dias), usando um switch sem break*/

#include <stdio.h>

int main () {
    int mes, dias=0;
    printf("Digite o número do mês (1 à 12): ");
    scanf("%d", &mes);
    if (mes < 1 || mes > 12) {
        printf("Mês inválido.\n");
        return 1;
    }
    switch (mes) {
        // Meses que adicionam 1 dia (janeiro, março, maio, julho, agosto, outubro, dezembro)
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10
        case 12: dias=(dias+1); // Adiciona 1 dia (total parcial: 1)
        // Meses que adicionam 2 dias (abril, junho, setembro, novembro)
        case 4:
        case 6:
        case 9:
        case 11: dias=(dias+2); // Adiciona 2 dias (total parcial: 1+2=3)
        // Todos os meses adicionam 28 dias
        default : dias=(dias+28); // Adiciona 28 dias (total final: 1+2+28=31
    printf("O mes %d tem %d dias", mes, dias);
    }        
}