/*Implemente em C a seguinte função: char *strpack(char *s).
Recebe uma string e compacta num único caractere qualquer conjunto de caracteres repetidos consecutivos.*/

char *strpack(char *s) {
  int i, j = 0;
  for (i = 1; s[i] != '\0'; i++) {
    // Se o caractere atual for diferente do último armazenado
    if (s[i] != s[j])
    // Incrementa j primeiro, depois armazena o novo caractere
      s[++j] = s[i];
  }
  s[++j] = '\0';
  return s;
}
int main () {
  char s[100];
  printf("Insira uma string (máximo 99 caracteres): ");
  gets(s);
  printf("String compactada: %s\n", strpack(s));
}