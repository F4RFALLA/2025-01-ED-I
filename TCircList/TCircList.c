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

bool list_insert_end(TCircList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL)
        return false;

    if(lista->inicio==NULL){
        lista->inicio = novo;
        novo->prox = novo; 
        //Forma equivalente
        //lista->inicio->prox = lista->inicio; 
    }else{
        //3) Percorrer a lista, e achar o último elemento
        TNo* aux = lista->inicio;
        //Quem é o ultimo nó?
        //aux->prox == lista->inicio;
        while(aux->prox != lista->inicio)
            aux = aux->prox;
        // aux sera nosso ultimo elemento
        //4) Último elemento passa a apontar para o novo nó;
        aux->prox = novo;
        //5) Próximo de novo deve apontar para o início;
        novo->prox = lista->inicio;
        //6) Início passa a apontar para o novo nó;
        //lista->inicio = novo;
    }
    return true;
}

bool list_insert_begin(TCircList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL)
        return false;
    if(lista->inicio!=NULL){
        //3) Percorrer a lista, e achar o último elemento
        TNo* aux = lista->inicio;
        //Quem é o ultimo nó?
        //aux->prox == lista->inicio;
        while(aux->prox != lista->inicio)
            aux = aux->prox;
        // aux sera nosso ultimo elemento
        //4) Último elemento passa a apontar para o novo nó;
        aux->prox = novo;
        //5) Próximo de novo deve apontar para o início;
        novo->prox = lista->inicio;
        
    }
    //6) Início passa a apontar para o novo nó; 
    lista->inicio = novo;
    return true;
}


void list_print(TCircList* lista){
    TNo* aux = lista->inicio;
    do{
        if(aux!=NULL){        
            printf("%d, ", aux->info);
            aux = aux->prox;
        }
    }while(aux != lista->inicio);    
    putchar('\n');
}

TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo){
        novo->info = info;
        novo->prox = novo;
    }
    return novo;
}
