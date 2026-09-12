#include <stdio.h>
#include "fila.h"

Fila criarFila(void) {
    Fila f;
    f.inicio = 0;
    f.fim = 0;
    f.quantidade = 0;
    return f;
}

int filaCheia(Fila f) {
    return f.quantidade == TAM;
}

int filaVazia(Fila f) {
    return f.quantidade == 0;
}



Fila enfileirar(Fila f, int valor) {
    if (filaCheia(f)) {
        printf("Fila cheia.\n");
        return f;
    }

    f.dados[f.fim] = valor;
    f.fim = (f.fim + 1) % TAM;
    f.quantidade++;

    return f;
}

Fila desenfileirar(Fila f) {
    if (filaVazia(f)) {
        printf("Fila vazia.\n");
        return f;
    }

    f.inicio = (f.inicio + 1) % TAM;
    f.quantidade--;

    return f;
}

void imprimirFila(Fila f) {
    if (filaVazia(f)) {
        printf("Fila vazia.\n");
        return;
    }
    printf(" Fila: ");
    int posicao = f.inicio;
    for (int i = 0; i < f.quantidade; i++) {
        printf("%d ", f.dados[posicao]);
        posicao = (posicao + 1) % TAM;
    }
    printf("\n");
}
