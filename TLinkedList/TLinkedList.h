#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H
#include<stdbool.h>

typedef struct _list TLinkedList;

TLinkedList* list_create();

bool list_insert_begin(TLinkedList*, int);

void list_print(TLinkedList*);


#endif