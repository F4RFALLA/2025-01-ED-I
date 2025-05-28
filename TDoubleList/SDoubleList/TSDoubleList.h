#ifndef TSDOUBLE_LIST_H
#define TSDOUBLE_LIST_H
#include<stdbool.h>

typedef struct _list TSDoubleList;

/**
 * Cria instâncias da lista duplamente encadeada ordenada de maneira crescente.
 * @return TSDoubleList* ponteiro para a lista alocada
 * */
TSDoubleList* list_create();
/**
 * Tenta fazer a inserção no início da lista. 
 * Por exemplo, se a sequência de inserção for 1, 2, 3, 
 * a lista será [3] -> [2] -> [1]
 * @param TSDoubleList* ponteiro para uma instância da lista ordenada
 * @param int informação a ser armazenada na lista de forma ordenada
 * @return bool informando o sucesso da operação
 */
bool list_insert(TSDoubleList*, int);
/**
 * Tenta fazer a inserção no fim da lista. 
 * Por exemplo, se a sequência de inserção for 1, 2, 3, 
 * a lista será [1] -> [2] -> [3]
 * @param TSDoubleList* ponteiro para uma instância da lista
 * @param int informação a ser armazenada na lista
 * @return bool informando o sucesso da operação
 */
void list_print(TSDoubleList*);
/**
 * Imprime a lista duplamente encadeada do fim para o começo.
 * @param TSDoubleList* ponteiro para a lista
 */
void list_reverse_print(TSDoubleList*);


#endif