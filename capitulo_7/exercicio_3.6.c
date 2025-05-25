/*Implemente em C a seguinte função: char Max_Ascii(char *str). 
Devolve o caractere com maior código ASCII presente na string str. Se a string estiver vazia, devolve \0.*/

#include <stdio.h>
#include <string.h>

char Max_Ascii(char *str) {
  char max = str[0];
  if(str[0] == '\0')
    return '\0';
  for(int i = 1; str[i] != '\0'; i++) {
    if (str[i] > max)
      max = str[i];
  }
  return max;
}

int main() {
  char str[101], ch;
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  ch = Max_Ascii(str);
  if(ch != '\0')
    printf("O caractere com maior código ASCII (%d) dessa string é \'%c\'\n", (int)ch, ch);
  else
    printf("String vazia\n");
  return 0;
}