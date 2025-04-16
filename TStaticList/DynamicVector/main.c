#include "TSList.h"

int main(){
    TSList *lista_pares = TSList_create(2);
    TSList *lista_impares = TSList_create(3);
    TSList_insert(lista_pares, 2);
    TSList_insert(lista_pares, 4);
    TSList_insert(lista_pares, 6);
    TSList_insert(lista_impares, 3);
    TSList_insert(lista_impares, 7);

    TSList_print(lista_pares);
    TSList_print(lista_impares);
    //Teste do Exercício 1 A
    TSList* conca_1 = TSList_concatenate_1(lista_pares, lista_impares);
    TSList_print(conca_1);

    //Teste do Exercício 1B
    TSList* conca_1 = TSList_concatenate_2(lista_pares, lista_impares);
    TSList_print(conca_1);
    //Teste do exercício 2...
    TSList_delete_n(lista_pares, 2);
    TSList_print(lista_pares); //Espera-se que tenha apenas 1 elemento
    return 0;
}