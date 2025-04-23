#include "TLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _no{
    int info;
    struct _no *prox;
}TNo;
TNo* TNo_createNFill(int);

struct _list{
    TNo* inicio;
};

TLinkedList* list_create(){
    TLinkedList* nova = malloc(sizeof(TLinkedList));
    if(nova){
        nova->inicio = NULL;
    }
    return nova;
}

bool list_insert_begin(TLinkedList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL) return false;
    if(lista->inicio != NULL)
        novo->prox = lista->inicio;
    lista->inicio = novo;
    return true;
}

void list_print(TLinkedList* lista){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        printf("[%d]->", aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}

TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo){
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}