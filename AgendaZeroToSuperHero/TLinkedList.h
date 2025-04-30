#ifndef TLINKED_LIST_H
#define TLINKED_LIST_H
#include<stdbool.h>
#include "TContato.h"

typedef struct _list TLinkedList;

/**
 * Cria instâncias da lista simplesmente encadeada.
 * @return TLinkedList* ponteiro para a lista alocada
 * */
TLinkedList* list_create();
/**
 * Tenta fazer a inserção no início da lista. 
 * Por exemplo, se a sequência de inserção for 1, 2, 3, 
 * a lista será [3] -> [2] -> [1]
 * @param TLinkedList* ponteiro para uma instância da lista
 * @param TContato informação a ser armazenada na lista
 * @return bool informando o sucesso da operação
 */
bool list_insert_begin(TLinkedList*, TContato);
/**
 * Tenta fazer a inserção no fim da lista. 
 * Por exemplo, se a sequência de inserção for 1, 2, 3, 
 * a lista será [1] -> [2] -> [3]
 * @param TLinkedList* ponteiro para uma instância da lista
 * @param TContato informação a ser armazenada na lista
 * @return bool informando o sucesso da operação
 */
bool list_insert_end(TLinkedList*, TContato);
/**
 * Faz a impressão da lista para checagem.
 * @param TLinkedList* ponteiro para uma instância da lista
 */

 /**
 * Tenta deletar o elemento do início. 
 * Por exemplo, se a lista é [1] -> [2] -> [3], apos a chamada, 
 * a Lista se tornará [2] -> [3]
 * @param TLinkedList* ponteiro para uma instância da lista
 * @return bool informando o sucesso da operação
 */
bool list_delete_begin(TLinkedList*);
void list_print(TLinkedList*);
#endif