/* Escreva a seguinte função: char toupper
(char c).
Devolve o valor do caractere c transformado em maiúsculas. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Insira um caractere: ");
    scanf ("%c", &c);
    if (isalpha(c)) {
        if (islower(c))
            printf("%c em maiúsculo é %c\n", c, toupper(c));    
        else 
            printf("%c já é uma letra maiúscula\n", c);
    }
    else 
        printf("%c não é uma letra\n", c);
}