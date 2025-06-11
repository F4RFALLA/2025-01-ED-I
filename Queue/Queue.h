#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>


typedef struct _queue Queue;

Queue* Queue_create();

bool Queue_enqueue(Queue*, int);
bool Queue_dequeue(Queue*, int*);

bool Queue_is_empty(Queue*);

bool Queue_is_full(Queue*);

#endif