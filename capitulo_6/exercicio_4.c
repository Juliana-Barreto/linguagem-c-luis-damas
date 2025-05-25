/* Faça um programa de jogo da velha que termine quando um 
jogador complete alguma linha, coluna ou diagonal */

#include <stdio.h>
#define TAMANHO 3

// Inicializa todas as posições do tabuleiro com espaços em branco
void IniciarVar(char v[TAMANHO][TAMANHO]) {
  int linha, coluna;
  for (linha = 0; linha < TAMANHO; linha++) {
    for (coluna = 0; coluna < TAMANHO; coluna++)
    v[linha][coluna] = ' ';
  }
}

// Exibe o tabuleiro formatado com linhas divisórias
void ImprimirTabuleiro(char tab[TAMANHO][TAMANHO]) {
  int linha, coluna;
  printf("\nJOGO DA VELHA\n");
  for (linha = 0; linha < TAMANHO; linha++) {
    for (coluna = 0; coluna < TAMANHO; coluna++){
      printf(" %c ", tab[linha][coluna]); // Mostra o conteúdo da célula
      if (coluna < TAMANHO - 1)
      printf("|"); // Linha vertical entre colunas
    }
    printf("\n");
    if (linha < TAMANHO - 1)
      printf("---+---+---\n"); // Linha horizontal entre linhas
  }
  printf("\n");
}

// Valida se a jogada está dentro dos limites e em célula vazia
int ValidarJogada(char tab[TAMANHO][TAMANHO], int linha, int coluna) {
  if (linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO || tab[linha][coluna] != ' ') {
    printf("Jogada inválida! Tente novamente.\n");
    return 0; 
  }
  else
    return 1;
}

// Processa a jogada de um jogador
void Jogada(char tab[TAMANHO][TAMANHO], int n) {
  int linha, coluna;
  char simbolo = (n == 1) ? 'X' : 'O'; // Define símbolo do jogador
  while (1) {
    printf("JOGADOR %d\n", n);
    printf("Linha(1 a 3): ");
    scanf("%d", &linha);
    getchar(); // Captura o ENTER
    printf("Coluna(1 a 3): ");
    scanf("%d", &coluna);    
    linha--; coluna--; //Converte para índices 0-2
    if (ValidarJogada(tab, linha, coluna)) {
      tab[linha][coluna] = simbolo; // Registra jogada válida
      break;
    }
  }
}

// Verifica se algum jogador venceu
int VerificarVencedor(char tab[TAMANHO][TAMANHO]) {
  int linha, coluna;
  // Verifica linhas
  for (linha = 0; linha < TAMANHO; linha++)
    if (tab[linha][0] != ' ' && tab[linha][0] == tab[linha][1] && tab[linha][0] == tab[linha][2])
      return 1;
  // Verifica colunas
  for (coluna = 0; coluna < TAMANHO; coluna++)
    if (tab[0][coluna] != ' ' && tab[0][coluna] == tab[1][coluna] && tab[0][coluna] == tab[2][coluna])
      return 1;
  // Verifica diagonal principal
  if (tab[0][0] != ' ' && tab[0][0] == tab[1][1] && tab[0][0] == tab[2][2])
    return 1;
  // Verifica diagonal secundária
  if (tab[0][2] != ' ' && tab[0][2] == tab[1][1] && tab[0][2] == tab[2][0])
    return 1;
  return 0;
}

// Verifica se houve empate (todas células preenchidas)
int VerificarEmpate(int jogadas) {
  if (jogadas == 9) { // Tabuleiro completo (3x3 = 9 jogadas)
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
    // Jogador 1 (X)
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
    // Jogador 2 (O)  
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