/*Implemente em C a seguinte função: int Is_Len_OK(char *string, int comprimento). 
Verifica se o comprimento da string é igual ao valor que é enviado à função.*/

#include <stdio.h>
#include <string.h>

int Is_Len_OK(char *string, int comprimento) {
  return strlen(string) == comprimento;
}
int main () {
  char string[100];
  int comprimento;
  printf("Insira uma string (máximo 99 caracteres): ");
  fgets(string, sizeof(string), stdin);
  printf("Qual o seu comprimento? ");
  scanf("%d", &comprimento);
  if (Is_Len_OK(string, comprimento))
    printf("Certo, o comprimento da string é %d\n", &comprimento);
  else
    printf("Errado, o comprimento da string é %.0ld\n", strlen(string));
}