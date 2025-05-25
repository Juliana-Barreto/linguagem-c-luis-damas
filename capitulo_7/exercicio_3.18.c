/*Implemente em C a seguinte função: int Is_Alfa_Digit(char *string). 
Esta função recebe uma string, e tem por objetivo verificar se essa string contém alternadamente um 
caractere Alfabético seguido de um Dígito. O primeiro caractere deve ser sempre alfabético.*/

#include <stdio.h>
#include <ctype.h>

int Is_Alfa_Digit(char *string){
  for (int i = 0; string[i] != '\0'; i++) {
    // Para posições pares deve ser letra
    if ((i % 2 == 0) && (isdigit(string[i]))) {
      return 0;
    }
    // Para posições ímpares deve ser dígito
    if ((i % 2 != 0) && (isalpha(string[i]))){
      return 0;
    }
  }
  return 1;
}
int main() {
  char string[101];
  do {
  printf("Insira uma string (máximo 99 caracteres): ");
  fgets(string, sizeof(string), stdin);
  if (!isalpha(string[0]))
    printf("Inválido. O primeiro caractere da string deve ser alfabético.\n");
  } while (!isalpha(string[0]));
  if(Is_Alfa_Digit(string))
    printf("Essa string contém alternadamente um caractere alfabético seguido de um dígito\n");
  else
    printf("Essa string não contém alternadamente um caractere alfabético seguido de um dígito\n");
}