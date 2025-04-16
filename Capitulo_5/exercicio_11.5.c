/* Escreva a seguinte função: int isupper(char c).
Devolve verdade caso c seja uma letra maiúscula. Falso, caso contrário. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Insira um caractere: ");
    scanf ("%c", &c);
    if (isupper (c)) 
        printf ("%c é uma letra maiúscula\n", c);
    else 
        printf ("%c não é uma letra maiúscula\n", c);
}