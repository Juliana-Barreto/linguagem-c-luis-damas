/* Implemente a seguinte função: float VAL(float x, int n, float t).
Devolve o VAL (Valor atual Líquido) para n anos, à taxa t e é definido através da seguinte fórmula:
VAL = x / (1 + t) + x / (1 + t)² + x / (1 + t)³ + ... + x / (1 + t)^n */

#include <stdio.h>

float Pot (float base, int exp){ 
    int i;
    float pot;
    // Loop que multiplica a base 'exp' vezes
    for (i = 1, pot = 1.0; i <= exp; i++)
    pot *= base; // Multiplica o resultado acumulado pela base
    return pot;
}

float VAL (float x, int n, float t){
    int i;
    float val;
    // Loop que calcula o somatório dos valores presentes
    for (i = 1, val = 1.0; i <= n; i++)
    val += x / Pot(1+t, i); // Adiciona o valor presente de cada fluxo
    return val;
}

int main () {
    int n;
    float x, t, resp;
    printf("Insira o valor: ");
    scanf("%f", &x);
    printf("Insira a quantidade de anos: ");
    scanf("%d", &n);
    printf("Insira a taxa de juros em decimal (ex: 10%% = 0.1): ");
    scanf("%f", &t);
    resp = VAL(x, n, t);
    printf("O valor atual líquido é: %.2f\n", resp); 
}

