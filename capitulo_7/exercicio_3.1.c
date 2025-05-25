/*Implemente em C a seguinte função: char *repeticoes(char *s).
Recebe uma string, retirando-lhe todos os caracteres que não se encontram repetidos.*/

#include <stdio.h>

char *repeticoes(char *s){
  int i, j = 0, cont[256] = {0};
  // 1ª passada: conta a frequência de cada caractere
  for (i = 0; s[i] != '\0'; i++) {
    cont[(unsigned char)s[i]]++;
  }
  // 2ª passada: filtra apenas caracteres repetidos
  for (i = 0; s[i] != '\0'; i++) { 
    if (cont[(unsigned char)s[i]] > 1) // Se caractere aparece mais de 1 vez
      s[j++] = s[i]; // Copia o caractere para s[j] e avança pra próxima posição
  }
  s[j] = '\0';
  return s;
}
int main(){
char s[101];
printf("Insira uma string (máx. 99 caracteres): ");
fgets(s, sizeof(s), stdin);
repeticoes(s);
puts(s);
}