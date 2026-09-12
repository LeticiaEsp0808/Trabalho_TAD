#ifndef FILA_H
#define FILA_H

#define TAM 5

typedef struct {
    int dados[TAM];
    int inicio;
    int fim;
    int quantidade;
} Fila;

Fila criarFila();

int filaCheia(Fila f);
int filaVazia(Fila f);

Fila enfileirar(Fila f, int valor);
Fila desenfileirar(Fila f);

void imprimirFila(Fila f);

#endif
