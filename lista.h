#ifndef LISTA_H
#define LISTA_H
#ifndef TAM
#define TAM 5
#endif

typedef struct {
    int dados[TAM];
    int tamanho;
} Lista;

Lista criarLista();

int listaCheia(Lista l);
int listaVazia(Lista l);

Lista inserirLista(Lista l, int valor);
Lista removerLista(Lista l, int posicao);

int buscarLista(Lista l, int valor);

Lista ordenarLista(Lista l);

void imprimirLista(Lista l);

#endif
