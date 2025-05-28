#ifndef TDOUBLE_LIST_H
#define TDOUBLE_LIST_H
#include<stdbool.h>

typedef struct _list TDoubleList;

/**
 * Cria instâncias da lista duplamente encadeada.
 * @return TDoubleList* ponteiro para a lista alocada
 * */
TDoubleList* list_create();
/**
 * Tenta fazer a inserção no início da lista. 
 * Por exemplo, se a sequência de inserção for 1, 2, 3, 
 * a lista será [3] -> [2] -> [1]
 * @param TDoubleList* ponteiro para uma instância da lista
 * @param int informação a ser armazenada na lista
 * @return bool informando o sucesso da operação
 */
bool list_insert_begin(TDoubleList*, int);
/**
 * Tenta fazer a inserção no fim da lista. 
 * Por exemplo, se a sequência de inserção for 1, 2, 3, 
 * a lista será [1] -> [2] -> [3]
 * @param TDoubleList* ponteiro para uma instância da lista
 * @param int informação a ser armazenada na lista
 * @return bool informando o sucesso da operação
 */
bool list_insert_end(TDoubleList*, int);
/**
 * Faz a impressão da lista para checagem.
 * @param TDoubleList* ponteiro para uma instância da lista
 */

 /**
 * Tenta deletar o elemento do início. 
 * Por exemplo, se a lista é [1] -> [2] -> [3], apos a chamada, 
 * a Lista se tornará [2] -> [3]
 * @param TDoubleList* ponteiro para uma instância da lista
 * @return bool informando o sucesso da operação
 */
bool list_delete_begin(TDoubleList*);
/**
 * Imprime a lista duplamente encadeada do inicio para o fim.
 * @param TDoubleList* ponteiro para a lista
 */
void list_print(TDoubleList*);
/**
 * Imprime a lista duplamente encadeada do fim para o começo.
 * @param TDoubleList* ponteiro para a lista
 */
void list_reverse_print(TDoubleList*);


#endif