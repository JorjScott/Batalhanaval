#include <stdio.h>

int main() {
    // cria o tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // posição do navio em pé (vertical)
    int x1 = 1;
    int y1 = 0;

    // posição do navio deitado (horizontal)
    int x2 = 2;
    int y2 = 2;

    // coloca o navio vertical no tabuleiro
    tabuleiro[y1][x1] = 1;
    tabuleiro[y1 + 1][x1] = 1;
    tabuleiro[y1 + 2][x1] = 1;

    // coloca o navio horizontal no tabuleiro
    tabuleiro[y2][x2] = 2;
    tabuleiro[y2][x2 + 1] = 2;
    tabuleiro[y2][x2 + 2] = 2;

    // mostra onde está o navio vertical
    printf("Navio Vertical:\n");
    printf("(%d, %d)\n", x1, y1);
    printf("(%d, %d)\n", x1, y1 + 1);
    printf("(%d, %d)\n", x1, y1 + 2);

    // mostra onde está o navio horizontal
    printf("Navio Horizontal:\n");
    printf("(%d, %d)\n", x2, y2);
    printf("(%d, %d)\n", x2 + 1, y2);
    printf("(%d, %d)\n", x2 + 2, y2);

    return 0;
}
