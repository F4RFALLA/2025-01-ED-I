#include "Queue.h"
#include <stdlib.h>

#define MAX 5
struct _queue{
    int data[MAX];
    unsigned int head, tail, qty;
};

Queue* Queue_create(){
    Queue* novo = malloc(sizeof(Queue));
    if(novo){
        novo->qty = 0;
        novo->head = 0;
        novo->tail = 0;
    }
    return novo;
}

bool Queue_enqueue(Queue* fila, int info){
    if(Queue_is_full(fila))
        return false;
    fila->data[fila->tail] = info;
    fila->tail = (fila->tail + 1) % MAX;
    fila->qty++;
    return true;
}
bool Queue_dequeue(Queue* fila, int* pinfo){
    if(Queue_is_empty(fila))
        return false;
    *pinfo = fila->data[fila->head];
    fila->head = (fila->head +1) % MAX;
    fila->qty--;
    return true;
}

bool Queue_is_empty(Queue* fila){
    return fila->qty == 0;
}

bool Queue_is_full(Queue* fila){
    return fila->qty == MAX;
}