/*Implemente em C a seguinte função: char *init_str(char *s). 
Torna a string s vazia.*/

#include <stdio.h>

char *init_str(char *s) {
  int i;
  s[0] = '\0';
  return s;
}
int main(){
  char s[101];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  printf("String original: \"%s\"\n", s);
  printf("String após função init_str(): \"%s\"\n", init_str(s));
  return 0;
}
