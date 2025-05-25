/*Implemente em C a seguinte função: char *Entremeado(char *s, int n). 
Transforma a string s, deixando apenas os caracteres existentes de n em n posições.*/

#include <stdio.h>
#include <string.h>

char *Entremeado(char *s, int n) {
  int i, j = 0;
  for (i = 0; s[i] != '\0'; i += n) {
    s[j++] = s[i];
  }
  s[j] = '\0';
  return s;
}
int main(){
  char s[101];
  int n;
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  do {
    printf("Digite o intervalo de caracteres a serem mantidos (ex: 2 para pegar 1º, 3º, 5º... caracteres): ");
    scanf("%d", &n);
    if (n > strlen(s))
      printf("%d é maior que o comprimento %lu da string\n", n, strlen(s));
    else if (n <= 0)
      printf("O intervalo deve ser um número positivo!\n");
  } while ((n > strlen(s) || (n <= 0)));
  printf("A string alterada ficou: \'%s\'\n", Entremeado(s, n));
}