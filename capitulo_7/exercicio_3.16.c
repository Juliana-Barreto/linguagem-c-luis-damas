/*Implemente em C a seguinte função: char *All_Big(char *s). 
Recebe uma string e deixa-lhe apenas os caracteres maiúsculos.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *All_Big(char *s) {
  int i, j = 0;
  for(i = 0; s[i] != '\0'; i++){
    if (isupper(s[i]))
      s[j++] = s[i];
  }
  s[j] = '\0';
  return s;
}

int main() {
    char str[101];
    printf("Digite uma string (máx. 99 caracteres): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Apenas maiúsculas: %s\n", All_Big(str));
    return 0;
}