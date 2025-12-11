#include <stdio.h>
int main() {

    //Variáveis de controle para as estruturas de repetição.
    int movimentoBispo = 0, movimentoRainha = 0;

    // Strings usadas para representar direções de movimento.
    char direita[] = "Direita";
    char esquerda[] = "Esquerda";
    char cima[] = "Cima";

    // Movimentação da TORRE: 5 casas para a direita.
    // Estrutura utilizada: FOR
    printf("\n1 - Movimentação da Torre: \n");

    for (int movimentoTorre = 0; movimentoTorre < 5; movimentoTorre++) {
        printf("Move  uma casa: %s!\n", direita);

        // Mensagem exibida somente ao final do último movimento.
        if (movimentoTorre == 4) {
            printf("A torre finaliza seu movimento!\n");
        }
    }

    // Movimentação do BISPO: 5 casas na diagonal para a direita.
    // Estrutura utilizada: WHILE

    printf("\n2 - Movimentação do BISPO: \n");

    while (movimentoBispo < 5) {
        printf("Move uma casa: %s, %s!\n", cima, direita);
        movimentoBispo++; // incrementa o contador do número de movimentos.
    }

    printf("O bispo terminou sua movimentação! \n");

    // Movimentação da RAINHA: 8 casas para a esquerda.
    // Estrutura utilizada: DO-WHILE

    printf("\n3 - Movimentação da RAINHA: \n");

    do{
        printf("Move uma casa: %s!\n", esquerda);
        movimentoRainha++; // incrementa o contador do número de movimentos.
    } while (movimentoRainha < 8);

    printf("A rainha terminou sua movimentação\n");

    return 0;
}
