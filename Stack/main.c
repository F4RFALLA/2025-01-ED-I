#include <stdio.h>
#include "Stack.h"
int main(){
    Stack* pilha = Stack_create();
    if(!pilha){
        puts("Erro a pilha não foi alocada!");
        return -1;
    }
    int V[] = {-5, 6, 7, 10, 50, 30};
    for(int i=0; i<6; i++){
        if(Stack_push(pilha, V[i]))
            printf("Sucesso ao inserir V[%d]=%d\n", i, V[i]);
        else
            printf("ERRO ao inserir V[%d]=%d\n", i, V[i]);
    }
    int temp;
    while(Stack_pop(pilha, &temp))
        printf("Valor removido da pilha: %d\n", temp);
    return 0;
}