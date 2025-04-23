/* Escreva a seguinte função: int isspace(char c).
Devolve verdade caso c seja um espaço ou um TAB. Falso, caso contrário. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Insira um caractere: ");
    scanf ("%c", &c);
    if (isspace (c)) 
        printf ("%c é um espaço\n", c);
    else 
        printf ("%c não é um espaço\n", c);
}