/* Faça um programa de jogo da velha que termine quando um 
jogador complete alguma linha, coluna ou diagonal */

#include <stdio.h>
#define TAMANHO 3

void IniciarVar(char v[TAMANHO][TAMANHO]) {
  int linha, coluna;
  for (linha = 0; linha < TAMANHO; linha++) {
    for (coluna = 0; coluna < TAMANHO; coluna++)
    v[linha][coluna] = ' ';
  }
}
void ImprimirTabuleiro(char tab[TAMANHO][TAMANHO]) {
  int linha, coluna;
  printf("\nJOGO DA VELHA\n");
  for (linha = 0; linha < TAMANHO; linha++) {
    for (coluna = 0; coluna < TAMANHO; coluna++){
      printf(" %c ", tab[linha][coluna]);
      if (coluna < TAMANHO - 1)
      printf("|");
    }
    printf("\n");
    if (linha < TAMANHO - 1)
      printf("---+---+---\n");
  }
  printf("\n");
}
int ValidarJogada(char tab[TAMANHO][TAMANHO], int linha, int coluna) {
  if (linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO || tab[linha][coluna] != ' ') {
    printf("Jogada inválida! Tente novamente.\n");
    return 0;
  }
  else
    return 1;
}
void Jogada(char tab[TAMANHO][TAMANHO], int n) {
  int linha, coluna;
  char simbolo = (n == 1) ? 'X' : 'O';
  while (1) {
    printf("JOGADOR %d\n", n);
    printf("Linha(1 a 3): ", n);
    scanf("%d", &linha);
    getchar();
    printf("Coluna(1 a 3): ", n);
    scanf("%d", &coluna);    
    linha--; coluna--;
    if (ValidarJogada(tab, linha, coluna)) {
      tab[linha][coluna] = simbolo;
      break;
    }
  }
}
int VerificarVencedor(char tab[TAMANHO][TAMANHO]) {
  int linha, coluna;
  for (linha = 0; linha < TAMANHO; linha++)
    if (tab[linha][0] != ' ' && tab[linha][0] == tab[linha][1] && tab[linha][0] == tab[linha][2])
      return 1;
  for (coluna = 0; coluna < TAMANHO; coluna++)
    if (tab[0][coluna] != ' ' && tab[0][coluna] == tab[1][coluna] && tab[0][coluna] == tab[2][coluna])
      return 1;
  if (tab[0][0] != ' ' && tab[0][0] == tab[1][1] && tab[0][0] == tab[2][2])
    return 1;
  if (tab[0][2] != ' ' && tab[0][2] == tab[1][1] && tab[0][2] == tab[2][0])
    return 1;
  return 0;
}
int VerificarEmpate(int jogadas) {
  if (jogadas == 9) {
    printf("Empate! Deu velha.");
    return 1;
  }
  else
    return 0;
}
int main() {
  int jogadas = 0;
  char tab[TAMANHO][TAMANHO];
  IniciarVar(tab);
  while (1) {
    ImprimirTabuleiro(tab);
    Jogada(tab, 1);
    ImprimirTabuleiro(tab);
    if (VerificarVencedor(tab)) {
      printf("Jogador 1 venceu!\n");
      break;
    }
    jogadas++;
    if (VerificarEmpate(jogadas))
    break;
    Jogada(tab, 2);
    ImprimirTabuleiro(tab);
    if (VerificarVencedor(tab)) {
      printf("Jogador 2 venceu!\n");
      break;
    }
    jogadas++;
    if (VerificarEmpate(jogadas))
    break;
  }
}