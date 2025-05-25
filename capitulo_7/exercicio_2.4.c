/*Implemente em C a seguinte função: char *strlwr(char *str). 
Coloca todos os caracteres de str em minúsculas.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *strlwr(char *str){
  for (int i = 0; str[i] != '\0'; i++)
    str[i] = tolower(str[i]);
return str;
}
int main(){
  char str[101], org[101];
  int ind;
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(str, sizeof(str), stdin);
  strcpy(org, str);
  printf("A string \'%s\' em minúsculo é: \'%s\'\n", org, strlwr(str));
  return 0;
}