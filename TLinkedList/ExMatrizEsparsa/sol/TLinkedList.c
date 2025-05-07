#include "TLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _no{
    int info;
    unsigned int i, j;
    struct _no *prox;
}TNo;
TNo* TNo_createNFill(int, unsigned int, unsigned int);

struct _list{
    TNo* inicio;
    unsigned int n, m;
};

TLinkedList* list_create(unsigned int n, unsigned int m){
    TLinkedList* nova = malloc(sizeof(TLinkedList));
    if(nova){
        nova->inicio = NULL;
        nova->n = n;
        nova->m = m;
    }
    return nova;
}

bool list_insert_begin(TLinkedList* lista, int info, unsigned int i, unsigned int j){
    TNo* novo = TNo_createNFill(info, i, j);
    if(novo == NULL) return false;
    if(lista->inicio != NULL)
        novo->prox = lista->inicio;
    lista->inicio = novo;
    return true;
}

bool list_insert_end(TLinkedList* lista, int info, unsigned int i, unsigned int j){
    TNo* novo = TNo_createNFill(info, i , j);
    if(novo == NULL) return false;
    //A lista está vazia?
    if(lista->inicio == NULL)
        lista->inicio = novo;
    else{
        //Lista nao vazia, temos que encontrar o último elemento
        TNo* aux = lista->inicio;
        while(aux->prox!=NULL)
            aux = aux->prox;
        aux->prox = novo;
    }
    return true;
}


void list_print(TLinkedList* lista){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        printf("(i=%d, j=%d) -> %d\n", aux->i, aux->j, aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}

TNo* TNo_createNFill(int info, unsigned int i, unsigned int j){
    TNo* novo = malloc(sizeof(TNo));
    if(novo){
        novo->info = info;
        novo->i = i;
        novo->j = j;
        novo->prox = NULL;
    }
    return novo;
}