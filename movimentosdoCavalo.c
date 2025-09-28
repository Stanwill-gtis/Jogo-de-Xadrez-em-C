#include <stdio.h>

int main() {
    
    // ============================
    // Movimento do Cavalo (for + while)
    // ============================
    /*
       O Cavalo se move em "L":
         - Duas casas em uma direção (para baixo)
         - Uma casa em direção perpendicular (para a esquerda)

       Aqui usamos dois loops aninhados:
         - Loop externo (for): controla os dois tipos de movimento (primeiro Baixo, depois Esquerda).
         - Loop interno (while): repete a quantidade de casas de cada movimento.
    */
    printf("Movimento do Cavalo:\n");

    int direcoes = 2;  // 1º: para baixo, 2º: para esquerda

    for (int d = 1; d <= direcoes; d++) {
        int passos;
        if (d == 1) {
            passos = 2; // duas casas para baixo
        } else {
            passos = 1; // uma casa para esquerda
        }

        int contador = 1;
        while (contador <= passos) {
            if (d == 1) {
                printf("Baixo (passo %d)\n", contador);
            } else {
                printf("Esquerda (passo %d)\n", contador);
            }
            contador++;
        }
    }

    return 0;
}
