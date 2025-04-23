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

bool list_insert_end(TLinkedList* lista, int info){
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

TLinkedList* list_concatenate(TLinkedList* l1, TLinkedList* l2){
    TLinkedList* l_result = list_create();
    if(l_result){
        TNo* aux = l1->inicio;
        while(aux!=NULL){
            list_insert_end(l_result, aux->info);
            aux = aux->prox;
        }
        aux = l2->inicio;
        while(aux!=NULL){
            list_insert_end(l_result, aux->info);
            aux = aux->prox;
        }
    }
    return l_result;
}

bool list_delete_begin(TLinkedList* lista){
    if(lista->inicio == NULL)
        return false;
    TNo* aux = lista->inicio;
    lista->inicio = lista->inicio->prox;
    free(aux);
    return true;
}

bool list_delete_n(TLinkedList* lista, unsigned int n){
    while(n-->0){
        if(!list_delete_begin(lista))
            return false;
    }
    return true;
}