/*Implemente em C a seguinte função: char *strijset(char *s, int i, int j, char ch). 
Coloca o caractere ch nas posições i...j na string s.*/

#include <stdio.h>
#include <string.h>

char *strijset(char *s, int i, int j, char ch) {
  for(int k = i; k <= j; k++)
    s[k] = ch;
  return s;
}
int main () {
  char s[101], ch;
  int i, j;
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  do {
    printf("Insira o limite inferior: ");
    scanf("%d", &i);
    if (i < 0 || i > (strlen(s)))
      printf("Valor inválido, deve estar entre 0 e %lu\n", strlen(s)-1);
  } while (i < 0 || i > (strlen(s)));
  do {
    printf("Insira o limite superior: ");
    scanf("%d", &j);
    if (j < i || j > (strlen(s)))
      printf("Valor inválido, deve estar entre %d e %lu\n", i, strlen(s)-1);
  } while (j < i || j > (strlen(s)));
  getchar();
  printf("Digite o caractere a ser inserido nesse intervalo: ");
  scanf("%c", &ch);
  printf("String modificada: '%s'\n", strijset(s, i, j, ch));
}