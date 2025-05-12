/*Implemente em C a seguinte função: char *strnset(char *s, char ch, int n). 
Coloca o caractere ch apenas nas primeiras n posições da string s.
Se n > strlen(s) então n toma o valor de strlen(s).*/

#include <stdio.h>
#include <string.h>

char *strnset(char *s, char ch, int n) {
  for (int i = 0; i <= n; i++)
  s[i] = ch;
return s;
}
int main(){
  char s[100];
  char ch;
  int n;
  printf("Insira uma string: ");
  fgets(s, sizeof(s), stdin);
  printf("Insira um caractere para preencher a string: ");
  ch = getchar();
  printf("Informe a quantidade de caracteres a serem substituídos: ");
  scanf("%d", &n);
  if(n > strlen(s))
    n = strlen(s);
  printf("A string alterada ficou: \'%s\'\n", strnset(s, ch, n));
}