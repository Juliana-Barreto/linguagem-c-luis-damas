/*Implemente em C a seguinte função: char n_esimo(char *s, int n).
Devolve o n-ésimo caractere da string s.*/

#include <stdio.h>
#include <string.h>

char n_esimo(char *s, int n) {
  return s[n-1]; //porque o usuário conta a partir de 1
}

int main(){
  char s[101];
  int n;
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  printf("A string tem %lu caracteres.\n", strlen(s));
  do {
    printf("Digite a posição do caractere que deseja (1 a %lu): ", strlen(s)); 
    scanf("%d", &n);
  } while (n < 0 || n > strlen(s));
  printf("O caractere na posição %d é o %c\n", n, n_esimo(s, n));
  return 0;
}