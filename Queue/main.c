#include "Queue.h"
#include<stdio.h>

int main(){
    int V[] = {1, 2, 3, 4, 5, 6};
    Queue* fila = Queue_create();
    for(int i=0;i<6; i++)
        if(!Queue_enqueue(fila, V[i]))
            printf("Erro ao enfileirar o valor V[%i]=%i\n", i, V[i]);
    int temp;
    while(Queue_dequeue(fila, &temp))
        printf("%d\n", temp);
    return 0;
}
