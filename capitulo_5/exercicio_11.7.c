/* Escreva a seguinte função: char tolower(char c).
Devolve o valor do caractere c transformado em minúsculas. */

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Insira um caractere: ");
    scanf ("%c", &c);
    if (isalpha(c)) {
        if (isupper(c))
            printf("%c em minúsculo é %c\n", c, tolower(c));    
        else 
            printf("%c já é uma letra minúscula\n", c);
    }
    else 
        printf("%c não é uma letra\n", c);
}