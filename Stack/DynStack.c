#include "Stack.h"
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no *prox;
}TNo;

struct _stack{
    TNo* inicio;
    unsigned int qty;
};

Stack* Stack_create(){
    Stack* nova = malloc(sizeof(Stack));
    if(nova!=NULL){
        nova->qty = 0;
        nova->inicio = NULL;
    }
    return nova;
}

bool Stack_push(Stack* pilha, int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL)
        return false;
    novo->info = info;
    novo->prox = pilha->inicio;
    pilha->inicio = novo;
    pilha->qty++;
    return true;
}
bool Stack_pop(Stack* pilha, int* info){
    if(Stack_is_empty(pilha))
        return false;
    *info = pilha->inicio->info;
    TNo* temp = pilha->inicio;
    pilha->inicio = pilha->inicio->prox;
    free(temp);
    pilha->qty--;
    return true;
}

bool Stack_is_empty(Stack* pilha){
    return pilha->qty == 0;
    //return pilha->inicio == NULL;
}

bool Stack_is_full(Stack* pilha){
    return false;
}

unsigned int Stack_size(Stack* pilha){
    return pilha->qty;
}