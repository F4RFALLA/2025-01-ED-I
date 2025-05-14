#ifndef TCIRC_LIST_H
#define TCIRC_LIST_H
#include<stdbool.h>

typedef struct _list TCircList;

/**
 * Cria instâncias da lista simplesmente encadeada circular.
 * @return TCircList* ponteiro para a lista alocada
 * */
TCircList* list_create();
/**
 * Tenta fazer a inserção no início da lista. 
 * Por exemplo, se a sequência de inserção for 1, 2, 3, 
 * a lista será [3] -> [2] -> [1]
 * @param TCircList* ponteiro para uma instância da lista
 * @param int informação a ser armazenada na lista
 * @return bool informando o sucesso da operação
 */
bool list_insert_begin(TCircList*, int);
/**
 * Tenta fazer a inserção no fim da lista. 
 * Por exemplo, se a sequência de inserção for 1, 2, 3, 
 * a lista será [1] -> [2] -> [3]
 * @param TCircList* ponteiro para uma instância da lista
 * @param int informação a ser armazenada na lista
 * @return bool informando o sucesso da operação
 */
bool list_insert_end(TCircList*, int);
/**
 * Faz a impressão da lista para checagem.
 * @param TCircList* ponteiro para uma instância da lista
 */

 /**
 * Tenta deletar o elemento do início. 
 * Por exemplo, se a lista é [1] -> [2] -> [3], apos a chamada, 
 * a Lista se tornará [2] -> [3]
 * @param TCircList* ponteiro para uma instância da lista
 * @return bool informando o sucesso da operação
 */
bool list_delete_begin(TCircList*);
void list_print(TCircList*);
/**
 * Concatenta duas listas.
 * @param TCircList* lista 1
 * @param TCircList* lista 2
 * @return TCircList* instância da terceira lista concatenada
 */

#endif