#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no * proximo;
} No;

void iniciarLista(No **lista) {
    *lista = NULL;
}

// O(1)
void inserirO1(No ** lista, int n) {

    No * novo = malloc(sizeof(No));

    novo->valor = n;
    novo->proximo = *lista;

    *lista = novo;

}

void excluirO1(No ** lista) {

    No * aux = *lista;

    *lista = (*lista)->proximo;

    free(aux);

}

void queue(No ** lista) {

    

}

int main(void) {

    No * lista = 0;


    return 0;

}