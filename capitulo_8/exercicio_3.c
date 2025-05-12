/*Implemente em C a seguinte função: char *strrchr(char *s, char ch). 
Retorna o endereço da última ocorrência de ch em s; caso não exista, retorna NULL. 
Escreva ainda um programa que solicite um nome completo e escreva na tela somente o sobrenome.*/

#include <stdio.h>
#include <string.h>

char *minha_strrchr(char *s, char ch) {
  char *ocorrencia = NULL;
  if (s[0] == '\0') 
    return ocorrencia;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == ch) {
      ocorrencia = &s[i];
    }
  }
  return ocorrencia;
}
int main () {
  char s[100];
  printf("Insira o seu nome completo: ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  if (minha_strrchr(s, ' ') == NULL) {
    printf("Resposta inválida. Deve incluir o seu sobrenome.\n");
  } else {
    char *sobrenome = minha_strrchr(s, ' ') + 1;
    printf("Sobrenome: %s\n", sobrenome);
  }
}