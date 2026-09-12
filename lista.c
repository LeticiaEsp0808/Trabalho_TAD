#include <stdio.h>
#include "lista.h"

Lista criarLista(void) {
    Lista l;
    l.tamanho = 0;
    return l;
}

int listaCheia(Lista l) {
    return l.tamanho == TAM;
}

int listaVazia(Lista l) {
    return l.tamanho == 0;
}




Lista inserirLista(Lista l, int valor) {
    if (listaCheia(l)) {
        printf("Lista cheia\n");
        return l;
    }
    l.dados[l.tamanho] = valor;
    l.tamanho++;

    return l;
}

Lista removerLista(Lista l, int posicao) {
    if (listaVazia(l)) {
        printf("Lista vazia.\n");
        return l;
    }
    for (int i = posicao; i < l.tamanho - 1; i++) {
        l.dados[i] = l.dados[i + 1];
    }
    l.tamanho--;

    return l;
}

int buscarLista(Lista l, int valor) {
    for (int i = 0; i < l.tamanho; i++) {
        if (l.dados[i] == valor) {
            return i;
        }
    }
    return -1;
}

Lista ordenarLista(Lista l) {
    for (int i = 0; i < l.tamanho - 1; i++) {
        for (int j = 0; j < l.tamanho - 1 - i; j++) {
            if (l.dados[j] > l.dados[j + 1]) {
                int aux = l.dados[j];
                l.dados[j] = l.dados[j + 1];
                l.dados[j + 1] = aux;
            }
        }
    }
    return l;
}

void imprimirLista(Lista l) {
    if (listaVazia(l)) {
        printf("Lista vazia.\n");
        return;
    }

    printf(" Lista: ");
    for (int i = 0; i < l.tamanho; i++) {
        printf("%d ", l.dados[i]);
    }
    printf("\n");
}
