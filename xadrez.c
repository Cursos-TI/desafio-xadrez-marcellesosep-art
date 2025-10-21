#include <stdio.h>

void rainha_esquerda_recursiva(int posicao, int max_passos, int passo, int max_moves);
void cavalo_L_cima_direita_recursivo(int linha, int coluna, int passo, int max_passos);

void bispo_diag_cima_direita_recursivo(int linha, int coluna, int passo, int max_passos) {
    if (passo < max_passos) {
        linha--;   // sobe
        coluna++;  // vai para a direita
        printf("Bispo na posicao: linha %d, coluna %d\n", linha, coluna);
        bispo_diag_cima_direita_recursivo(linha, coluna, passo + 1, max_passos);
    }
}

void torre_direita_recursiva(int posicao, int passo, int max_passos) {
    if (passo <= max_passos) {
        printf("Torre na casa %d\n", posicao + passo);
        torre_direita_recursiva(posicao, passo + 1, max_passos);
    }

    
}

int main() {
  // Movimento da torre em for
  int posicao_torre = 1;

  printf("=== movimento da torre (for) ===\n");
  printf("Torre movendo 5 casas para a direita\n");

  for (int i = 0; i <= 5; i++) {
    printf("Torre na casa %d\n", posicao_torre + i);
  }


  // Movimento do bispo em while
  int linha_bispo = 4;
  int coluna_bispo = 4;
  int passos_bispo = 0;

  printf("\n=== Movimento do bispo (while) ===\n");
  printf("Bispo movendo 5 casas na diagonal (para cima e direita):\n");

  while (passos_bispo < 5) {
    linha_bispo--;   // sobe
    coluna_bispo++;  // vai para a direita
    passos_bispo++;
    printf("Bispo na posicao: linha %d, coluna %d\n", linha_bispo, coluna_bispo);
  }
  printf("Bispo terminou na linha %d, coluna %d\n\n", linha_bispo, coluna_bispo);

  // Movimento da rainha em do-while
  int linha_rainha = 4;
  int coluna_rainha = 8;
  int movimentos = 0;

  printf("=== Movimento da Rainha (do-while) ===\n");
  printf("Rainha movendo 8 casas para a esquerda:\n");

  do {
    coluna_rainha--;
    movimentos++;
    printf("Rainha na posicao: linha %d, coluna %d\n", linha_rainha, coluna_rainha);
  } while (movimentos < 8 && coluna_rainha > 0);

  printf("Rainha terminou na linha %d, coluna %d\n", linha_rainha, coluna_rainha);
  printf("\n=== fim do jogo de xadrez simplificado! ===\n");

  // Movimento do cavalo (exemplo simples em 'L')
  printf("\n=== Movimento do cavalo ===\n");
  // exemplo: cima, cima, direita
  printf("cima\n");
  printf("cima\n");
  printf("direita\n");
  // exemplo: baixo, baixo, esquerda
  printf("baixo\n");
  printf("baixo\n");
  printf("esquerda\n");

  return 0;
}
      
 



