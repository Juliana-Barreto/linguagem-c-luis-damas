/*Implemente em C a seguinte função: int ult_ind_chr(char *s, char c). 
Devolve o último índice em que encontrou o caractere c em s. Caso não exista, devolve -1.*/

#include <stdio.h>

int ult_ind_chr(char *s, char c){
  int ind = -1;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c)
      ind = i;
  }
  return ind;
}
int main(){
  char s[100];
  char c;
  int ind;
  printf("Insira uma string (máximo 99 caracteres): ");
  gets(s);
  printf("Insira um caractere para ser checado: ");
  c = getchar();
  ind = ult_ind_chr(s, c);
  if (ind != -1)
    printf("Em \'%s\', o último caractere \'%c\' está na posição %i\n", s, c, ind);
  else
    printf("Não há caractere \'%c\' em \'%s\'\n", c, s);
  return 0;
}