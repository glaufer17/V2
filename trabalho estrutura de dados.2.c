#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



struct no{
    int dados;
    No *proximo;
    No *anterior;
};

struct lista{
    int tamanho;
    No *cabeca;
    No *cauda;
}


//Criar lista.
Lista *criar_lista(){

    Lista *lista = (Lista*) malloc(sizeof(Lista));
    lista->tamanho = 0;
    lista->proximo = NULL;
    lista->anterior = NULL;

    return lista;
}

void adicionar_inicio_lista(Lista *lista, int valor){

    No *novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    novo->dados = volor;
    novo->anterior = NULL;
    novo->proximo = NULL;

    if(lista->cabeca == NULL){
        lista->cabeca = novo;
        lista->cauda = novo;
    }else{
        novo->proximo = lista->cabeca;
        lista->cabeca->anterior = novo;
        lista->cabeca = novo;
    }
    lista->tamanho = lista->tamanho + 1;

}


void adicionar_fim_lista(Lista *lista, int valor) {

    No *auxiliar, *novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    auxiliar = lista->cabeca;
    while(auxiliar->proximo)
        auxiliar = auxiliar->proximo;
    auxiliar->proximo = novo;
    lista->tamanho = lista->tamanho + 1;
}



bool remover_inicio_lista(Lista *ptr_lista) {

    //TODO: Implemente esta função.

    return true;

}

bool remover_fim_lista(Lista *ptr_lista) {


    //TODO: Implemente esta função.


    return true;





















int main(){

typedef struct no No;

typedef struct lista Lista;














}
