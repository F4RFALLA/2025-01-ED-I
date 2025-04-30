#include "TLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _no{
    TContato info;
    struct _no *prox;
}TNo;
TNo* TNo_createNFill(TContato);

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

bool list_insert_begin(TLinkedList* lista, TContato info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL) return false;
    if(lista->inicio != NULL)
        novo->prox = lista->inicio;
    lista->inicio = novo;
    return true;
}

bool list_insert_end(TLinkedList* lista, TContato info){
    TNo* novo = TNo_createNFill(info);
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
        TContato_print(aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}

TNo* TNo_createNFill(TContato info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo){
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}
