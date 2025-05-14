#include "TCircList.h"
#include <stdio.h>





int main(){
    int V[]={1, 2, 3}, i;
    TCircList* lista1 = list_create();
    for(i=0; i<3; i++){
        if(!list_insert_end(lista1, V[i]))
            printf("Nao consegui inserir na lista1 o valor V[%d] = %d\n", i, V[i]) ;   
        list_print(lista1);
    }
    list_print(lista1);
    return 0;
}