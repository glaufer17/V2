#include "deque_como_vetor.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct lista {
    No *anterior;
    int dados; 
    No *proximo;  
};

struct cabeca
{
    No *inicio;
    int tam;
};

//criar lista.
void criar_lista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}


//Inserir no Inicio.
void inserir_no_inicio(Lista *lista, int valor){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->dados = valor;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tam ++;
    }
    else{
        printf("Erro ao alocar memoria!");
    }
}

//Inserir no Final.
void inserir_no_final(Lista *lista, int valor){
    No *auxiliar, *novo = malloc(sizeof(No));

    if(novo){
        novo->dados = valor;
        novo->proximo = NULL;

        //É o primeiro?
        if(lista->inicio = NULL){
            lista->inicio = novo;
        }
        else{
            auxiliar = lista->inicio;
            while(auxiliar->proximo)
                auxiliar = auxiliar->proximo;
            auxiliar->proximo = novo;
        }
        lista->tam ++;
    }
    else{
        printf("Erro ao alocar memoria!");
    }
}

//inserir no meio.
void inserir_no_meio(Lista *lista, int valor, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->dados = valor;
        //é o primeiro?
        if(lista->inicio == NULL){
            novo->proximo = NULL;
            lista->inicio = novo;
        }
        else{
            aux = lista->inicio;
            while(aux->dados != ant && aux->proximo)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    }
    lista->tam ++;
}

//Imprimir Lista
void imprimir_lista(No *lista){

    printf("\n\tLista: ");
    while(lista){
        printf("%d ", lista->dados);
        lista = lista->proximo;
    }
    printf("\n\n");
}

No* remover_no_inicio(Lista *lista){
    No *remover  = NULL;

    if(lista->inicio){
        remover = lista->inicio;
        lista->inicio = remover->proximo;
        lista->tam --;
    }
}

No* remover_no_final(Lista *lista){
    No *remover  = NULL;
    No *aux;

    while(lista->inicio != NULL){
        aux = remover->proximo;
        lista->inicio = remover->proximo;
        lista->tam --;
    }
}