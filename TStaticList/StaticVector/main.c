#include "TSList.h"

int main(){
    TSList *lista_pares = TSList_create();
    TSList *lista_impares = TSList_create();
    TSList_insert(lista_pares, 2);
    TSList_insert(lista_pares, 4);
    TSList_insert(lista_pares, 6);
    TSList_insert(lista_impares, 3);
    TSList_insert(lista_impares, 7);

    TSList_print(lista_pares);
    TSList_print(lista_impares);
    return 0;
}