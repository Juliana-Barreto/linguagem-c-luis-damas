/* Escreva a seguinte função: int isdigit(char c).
Devolve verdade caso c seja um dígito. Falso, caso contrário. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Insira um caractere: ");
    scanf ("%c", &c);
    if isdigit (c) 
        printf ("%c é um dígito\n", c);
    else 
        printf ("%c não é um dígito\n", c);
}