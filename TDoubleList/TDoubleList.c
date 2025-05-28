#include "TDoubleList.h"
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

TDoubleList* list_create(){
    TDoubleList* nova = malloc(sizeof(TDoubleList));
    if(nova){
        nova->inicio = NULL;
        nova->fim = NULL;
    }
    return nova;
}

bool list_insert_begin(TDoubleList* lista, int info){
    TNo* novo = TNo_createNFill(info);

    if(novo == NULL) return false;
    //A lista está vazia?
    if(lista->inicio == NULL && lista->fim == NULL){
        lista->inicio = novo;
        lista->fim = novo;
    }else{
        novo->prox = lista->inicio;
        lista->inicio->ant = novo;
        lista->inicio = novo;
    }
    return true;
}

bool list_insert_end(TDoubleList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL) return false;
    //A lista está vazia?
    if(lista->inicio == NULL && lista->fim == NULL){
        lista->inicio = novo;
        lista->fim = novo;
    }else{
        //Lista nao vazia
        lista->fim->prox = novo;
        novo->ant = lista->fim;
        lista->fim = novo;
    }
    return true;
}


void list_print(TDoubleList* lista){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        printf("<-[%d]->", aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}
void list_reverse_print(TDoubleList* lista){
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

TDoubleList* list_concatenate(TDoubleList* l1, TDoubleList* l2){
    TDoubleList* l_result = list_create();
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

bool list_delete_begin(TDoubleList* lista){
    if(lista->inicio == NULL)
        return false;
    TNo* aux = lista->inicio;
    lista->inicio = lista->inicio->prox;
    free(aux);
    return true;
}

bool list_delete_n(TDoubleList* lista, unsigned int n){
    while(n-->0){
        if(!list_delete_begin(lista))
            return false;
    }
    return true;
}