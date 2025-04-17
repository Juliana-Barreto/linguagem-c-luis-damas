/* Implemente a seguinte função: int IsVogal(char ch).
Verifica se ch é uma das vogais do alfabeto (maiúscula ou minúscula). */

#include <stdio.h>

int IsVogal(char ch) {
  return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}
int main(){
  char ch;
  printf("Insira uma letra: ");
  scanf("%c", &ch);
  if (IsVogal(ch))
    printf ("%c é uma das vogais do alfabeto.\n", ch);
  else
    printf ("%c não é uma das vogais do alfabeto.\n", ch);
}