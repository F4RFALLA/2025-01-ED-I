#include "TLinkedList.h"






int main(){
    int V[]={1, 2, 3}, i;
    TLinkedList* lista1 = list_create();
    for(i=0; i<3; i++)
        list_insert_end(lista1, V[i]);
    list_print(lista1);
    return 0;
}