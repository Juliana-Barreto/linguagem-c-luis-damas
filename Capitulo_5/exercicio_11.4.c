/* Escreva a seguinte função: int islower(char c).
Devolve verdade caso c seja uma letra minúscula. Falso, caso contrário. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Insira um caractere: ");
    scanf ("%c", &c);
    if (islower (c)) 
        printf ("%c é uma letra minúscula\n", c);
    else 
        printf ("%c não é uma letra minúscula\n", c);
}