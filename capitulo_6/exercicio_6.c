/* Implemente a seguinte função: int memcmp(char *s1, char *s2, int n).
Que verifica se as n primeiras posições dos vetores s1 e s2 são ou não iguais.*/

#include <stdio.h>
#define N 5

int minha_memcmp(char *s1, char *s2, int n){
  int i;
  for (i = 0; i < n; i++) {
    if (s1[i] != s2[i])
    return 0;
  }
  return 1;
}

int main(){
  char s1[] = "Hello, world!\n";
  char s2[] = "Hello, user!\n";
  printf("%s", s1);
  printf("%s", s2);
  if(minha_memcmp(s1, s2, N))
    printf("As primeiras %d posições de s1 e s2 são iguais.\n", N);
  else
  printf("As primeiras %d posições de s1 e s2 são diferentes.\n", N);
}
