#include "TSDoubleList.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _no{
    int info;
    struct _no *prox, *ant;
}TNo;
TNo* TNo_createNFill(int);

struct _list{
    TNo* inicio;
    TNo* fim;
};

TSDoubleList* list_create(){
    TSDoubleList* nova = malloc(sizeof(TSDoubleList));
    if(nova){
        nova->inicio = NULL;
        nova->fim = NULL;
    }
    return nova;
}

bool list_insert(TSDoubleList* lista, int info){
    return false;//Remover depois que estiver codificada
}

void list_print(TSDoubleList* lista){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        printf("<-[%d]->", aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}
void list_reverse_print(TSDoubleList* lista){
    TNo* aux = lista->fim;
    while(aux!=NULL){
        printf("<-[%d]->", aux->info);
        aux = aux->ant;
    }
    putchar('\n');
}

TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo){
        novo->info = info;
        novo->prox = NULL;
        novo->ant = NULL;
    }
    return novo;
}

TSDoubleList* list_concatenate(TSDoubleList* l1, TSDoubleList* l2){
    TSDoubleList* l_result = list_create();
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

bool list_delete_begin(TSDoubleList* lista){
    if(lista->inicio == NULL)
        return false;
    TNo* aux = lista->inicio;
    lista->inicio = lista->inicio->prox;
    free(aux);
    return true;
}

bool list_delete_n(TSDoubleList* lista, unsigned int n){
    while(n-->0){
        if(!list_delete_begin(lista))
            return false;
    }
    return true;
}