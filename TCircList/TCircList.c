#include "TCircList.h"
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

TCircList* list_create(){
    TCircList* nova = malloc(sizeof(TCircList));
    if(nova){
        nova->inicio = NULL;
    }
    return nova;
}

bool list_insert_begin(TCircList* lista, int info){
    //TODO
    return false;
}

bool list_insert_end(TCircList* lista, int info){
    //TODO
    return false;
}


void list_print(TCircList* lista){
    //TODO
}

TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo){
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}
