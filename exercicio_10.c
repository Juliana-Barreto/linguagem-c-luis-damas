/* Escreva um programa que solicite ao usuário uma determinada data no formato 
aaaa-mm-dd e a mostre em seguida no format dd/mm/aaaa. */

#include <stdio.h>

main() 
{
  int ano, mes, dia;
  printf("Digite uma data no formato aaaa-mm-dd: ");
  scanf("%d-%d-%d", &ano, &mes, &dia);
  if (mes > 12 || mes < 1 || dia > 31 || dia < 1) {
    printf("Data inválida");
    return 0;
  } 
  printf("Data no formato dd/mm/aaaa: %d/%d/%d", dia, mes, ano);
  return 0;
}