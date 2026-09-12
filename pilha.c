#include <stdio.h>
#include "pilha.h"


Pilha criarPilha(void) {
    Pilha p;
    p.topo = 0;
    return p;
}

int pilhaCheia(Pilha p) {
    return p.topo == TAM;
}

int pilhaVazia(Pilha p) {
    return p.topo == 0;
}



Pilha push(Pilha p, int valor) {
    if (pilhaCheia(p)) {
        printf("Pilha cheia.\n");
        return p;
    }

    p.dados[p.topo] = valor;
    p.topo++;

    return p;
}

Pilha pop(Pilha p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia.\n");
        return p;
    }

    p.topo--;

    return p;
}

void imprimirPilha(Pilha p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia.\n");
        return;
    }

    printf(" Pilha: ");
    for (int i = p.topo - 1; i >= 0; i--) {
        printf("%d ", p.dados[i]);
    }
    printf("\n");
}
