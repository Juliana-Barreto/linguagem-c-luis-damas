// Escreva um programa que leia uma data e verifique se está é valida ou não

#include <stdio.h>

int main ()
{
    int dias, mes, ano;
    printf("Insira uma data (dd/mm/aaaa):");
    scanf("%d/%d/%d", &dias, &mes, &ano);
    if ((dias < 1 || mes < 1 || mes > 12 || ano < 1)){
        printf("Data inválida.\n");
        return 0;
    }
    switch (mes) {
    case 2 : 
        if ((ano%4 == 0 && ano%100 != 0) || (ano%400 == 0))
            if (dias > 29)
                printf("Data inválida.\n");
            else
                printf ("Data válida\n");
        else
            if (dias > 28)
                printf("Data inválida.\n");
            else
                printf("Data válida.\n"); 
        break;
    case 4:
    case 6:
    case 9:
    case 11: 
        if (dias > 30)
            printf("Data inválida.\n");
        else 
            printf("Data válida.\n"); 
        break;
    default :
        if (dias > 31)
            printf("Data inválida.\n");
        else
            printf("Data válida.\n");
    }
}