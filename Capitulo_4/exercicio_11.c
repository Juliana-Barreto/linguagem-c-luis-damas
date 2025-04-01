/* Escreva um programa que escreva na tela toda a tabela ASCII, escrevendo
em cada linha o código ASCII e o caractere correspondente.*/ 

/* Para que o usuário possa ver todos os caracteres escritos, a tela deve
ser parada de 20 em 20 linhas, até o usuário pressione a tecla 'c' ou 'C'
seguida de <ENTER>* para continuar a mostrar os próximos 20 caracteres.*/

#include <stdio.h>

int main() {
    int i, contador;
    char ch;
    for (i = 0, contador = 0; i <= 255; i++){
        printf ("%3d = %c\n", i, (char)i);
        if (contador == 20) {
            do {
                printf ("Pressione C para continuar\n");
                ch = getchar();
            } while (ch != 'c' && ch != 'C');
            contador = 0;
        }
        else
            contador++;   
    }      
}