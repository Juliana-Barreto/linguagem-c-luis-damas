/* Escreva a seguinte função: int isalnum(char c).
Devolve verdade caso c seja um dígito ou uma letra do alfabeto. Falso, caso contrário. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Insira um caractere: ");
    scanf ("%c", &c);
    if (isalnum (c)) {
        if (isalpha (c)) 
            printf("%c é uma letra do alfabeto\n", c);
        else if (isdigit (c))
            printf("%c é um dígito\n", c);
    }
    else 
        printf ("%c não é nem um dígito nem uma letra do alfabeto\n", c);
}