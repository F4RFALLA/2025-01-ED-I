#include "TLinkedList.h"
#include <stdio.h>





int main(){
    int V[]={1, 2, 3}, i;
    TLinkedList* lista1 = list_create();
    TLinkedList* lista2 = list_create();
    for(i=0; i<3; i++){
        list_insert_begin(lista1, V[i]);
        list_insert_end(lista2, V[i]);
    }
    TLinkedList* lista3 = list_concatenate(lista1, lista2);
    list_print(lista3);
    puts("Deletando 4 primeiros elementos");
    //list_delete_begin(lista3);    
    list_delete_n(lista3, 4);
    list_print(lista3);
    return 0;
}