#include "TLinkedList.h"
#include <stdio.h>





int main(){
    int V[]={1, 2, 3}, i;
    TLinkedList* lista1 = list_create();
    TLinkedList* lista2 = list_create();
    for(i=0; i<3; i++){
        if(!list_insert_begin(lista1, V[i]))
            printf("Nao consegui inserir na lista1 o valor V[%d] = %d\n", i, V[i]) ;   
        if(!list_insert_end(lista2, V[i]))
            printf("Nao consegui inserir na lista2 o valor V[%d] = %d\n", i, V[i]) ;   
    }
    TLinkedList* lista3 = list_concatenate(lista1, lista2);
    list_print(lista3);
    unsigned int n=4;
    printf("Deletando %u primeiros elementos\n", n);
    //list_delete_begin(lista3);    
    if(!list_delete_n(lista3, n))
        printf("Nao foi possível excluir %u elementos!\n", n);
    list_print(lista3);
    return 0;
}