/*Implemente, usando unicamente operações entre ponteiros, a função: char *StrDelUpper(char *s).
Apaga todos os caracteres maiúsculos em s.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *StrDelUpper(char *s) {
  char *leitor = s, *escritor = s; // leitor percorre a string, escritor guarda posição de escrita
  while (*leitor != '\0') {
    //Se o caractere atual não for maiúsculo
    if (!isupper(*leitor)) {
      //Copia o caractere para a posição de escrita e incrementa o ponteiro
      *(escritor++) = *leitor;
    }
    // Avança para o próximo caractere da string original
    leitor++;
  }
  // Finaliza a string resultante
  *escritor = '\0';
  // Retorna o ponteiro para a string modificada
  return s;
}

int main () {
  char s[101];
  printf("Insira uma string (máx. 99 caracteres): ");
  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = '\0';
  printf("A string sem caracteres maiúsculos é: %s\n", StrDelUpper(s));
  return 0;
}