#ifndef PILHA_H
#define PILHA_H
#ifndef TAM
#define TAM 5
#endif

typedef struct {
    int dados[TAM];
    int topo;
} Pilha;

Pilha criarPilha();

int pilhaCheia(Pilha p);
int pilhaVazia(Pilha p);

Pilha push(Pilha p, int valor);
Pilha pop(Pilha p);

void imprimirPilha(Pilha p);

#endif
