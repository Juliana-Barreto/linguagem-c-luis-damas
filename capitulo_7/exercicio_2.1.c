/*Implemente em C a seguinte função: int strcounta(char *s). 
Devolve o nº de caracteres alfabéticos em s.*/

#include <stdio.h>
#include <ctype.h>

int strcounta(char *s) {
  int i, cont;
  for (i=0, cont=0; s[i]!= '\0'; i++) {
    if(isalpha(s[i]))
      cont++;
  }
  return cont;
}
int main(){
  char s[101];  // 101 para acomodar 99 chars + \n + \0
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  printf("De \"%s\", %d são caracteres alfabéticos.\n", s, strcounta(s));
  return 0;
}

