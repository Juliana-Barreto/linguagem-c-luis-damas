/*Implemente em C a seguinte função: int stricmp(char *s1, char *s2). 
Faz o mesmo que a função strcmp, mas realiza a comparação ignorando se 
os caracteres estão em maiúsculas ou minúsculas (ignore case).*/

#include <stdio.h>
#include <ctype.h> 

int stricmp(char *s1, char *s2) {
  int i = 0;
  while (tolower(s1[i])==tolower(s2[i])) {
    if (s1[i] != '\0' || s2[i] != '\0')
      break;
    i++;
  }
  return(tolower(s1[i]) - tolower(s2[i]));
}
int main () {
  char s1[100], s2[100];
  int dif;
  printf("Insira a 1ª string (máximo 99 caracteres): ");
  gets(s1);
  printf("Insira a 2ª string (máximo 99 caracteres): ");
  gets(s2);
  dif = stricmp(s1, s2);
  if (dif < 0)
    printf("A primeira string vem antes da segunda.\n");
  else
    if (dif > 0)
      printf("A segunda string vem antes da primeira.\n");
    else
      printf("As duas strings são iguais.\n");
}