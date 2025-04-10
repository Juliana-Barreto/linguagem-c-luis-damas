/* Implemente a seguinte função: 
int Abs(int x) 
devolve o valor absoluto de x.*/

#include <stdio.h>

int Abs (int x) {
    if (x >= 0)
       return x;
    else
        return -x; 
}
int main () {
    int x, abs;
    printf("Insira um número: ");
    scanf("%d", &x);
    abs = Abs(x);
    printf("O valor absoluto é: %d\n", abs);
}