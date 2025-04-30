#include "TSList.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX 2

 struct _list{
    unsigned int qty;
    int data[MAX];
 };

TSList* TSList_create(){
    TSList *novo = malloc(sizeof(TSList));
    //Definindo o estado de uma lista vazia
    if(novo)
        novo->qty = 0;
    return novo;
}

bool TSList_insert(TSList* lista, int valor){
    if(lista == NULL) return false;
    if(!TSList_is_full(lista)){
        lista->data[lista->qty] = valor;
        lista->qty++;
        return true;
    }
    return false;
}

void TSList_print(TSList* lista){
    if(lista!=NULL)
        for(int i=0; i<lista->qty; i++)
            printf("%d, ", lista->data[i]);
    putchar('\n');
}

unsigned int TSList_qty(TSList* lista){
    if(lista!=NULL)
        return lista->qty;
    return 0;
}

bool TSList_is_empty(TSList* lista){
    if(lista!=NULL)
        return lista->qty == 0;
    return true;
}

bool TSList_is_full(TSList* lista){
    if(lista!=NULL)
        return lista->qty == MAX;
    return false;
}