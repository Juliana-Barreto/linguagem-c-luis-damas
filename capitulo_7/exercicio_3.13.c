/*Implemente em C a seguinte função: int atoi(char *s). 
Recebe uma string e devolve o inteiro que nela está representado.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int atoi(char *s) {
  int sinal, result = 0, i = 0;
  if (s[0] == '-'){
    sinal = -1;
    i++;
  }
  else
    sinal = +1;
  for(i; s[i] != '\0'; i++) {
    if (!isdigit(s[i])) 
      break;
    result = result * 10 + (s[i] - '0');
  }
  return result * sinal;
}

int main() {
  char s[101];
  printf("Insira uma string (máximo 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  printf("O inteiro correspondente é %d\n", atoi(s));
  return 0;
}
