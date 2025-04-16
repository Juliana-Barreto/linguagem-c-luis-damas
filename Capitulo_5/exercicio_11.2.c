/* Escreva a seguinte função: int isalpha(char c).
Devolve verdade caso c seja uma letra do alfabeto, maiúscula ou minúscula. 
Falso, caso contrário. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Insira um caractere: ");
    scanf ("%c", &c);
    if isalpha (c) 
        printf ("%c é uma letra do alfabeto\n", c);
    else 
        printf ("%c não é uma letra do alfabeto\n", c);
}