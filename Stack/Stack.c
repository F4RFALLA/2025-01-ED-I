#include "Stack.h"
#include <stdlib.h>
#define MAX 5
struct _stack{
    int data[MAX];
    unsigned int qty;//Quantidade de elementos na pilha
    //topo = elemento no indice qty-1
};

Stack* Stack_create(){
    Stack* nova = malloc(sizeof(Stack));
    if(nova!=NULL)
        nova->qty = 0;
    return nova;
}

bool Stack_push(Stack* pilha, int info){
    if(Stack_is_full(pilha))
        return false;
    //Codigo para se a pilha nao estiver cheia
    pilha->data[pilha->qty++] = info;
    return true;
}
bool Stack_pop(Stack* pilha, int* info){
    if(Stack_is_empty(pilha))
        return false;
    *info = pilha->data[--(pilha->qty)];
    return true;
}

bool Stack_is_empty(Stack* pilha){
    return pilha->qty == 0;
}

bool Stack_is_full(Stack* pilha){
    return pilha->qty == MAX;
}

unsigned int Stack_size(Stack* pilha){
    return pilha->qty;
}