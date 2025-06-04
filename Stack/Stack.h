#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct _stack Stack;
/**
 * Cria instâncias de pilhas. 
 * Retorna NULL caso não seja possível alocar memória para uma nova pilha.
 * @return Stack* ponteiro para uma pilha possivelmente alocada. 
 */
Stack* Stack_create();
/**
 * Tenta inserir um dado na pilha.
 * @param Stack* ponteiro para a pilha
 * @param int valor inteiro para ser inserido na pilha
 * @return bool informando o status da operação.
 */
bool Stack_push(Stack*, int);
/**
 * Tenta remover o elemento do topo da pilha.
 * @param Stack* ponteiro para a pilha
 * @param int* ponteiro para um inteiro para armazenar 
 * o valor removido da pilha.
 * @return bool informando o status da operação.
 */
bool Stack_pop(Stack*, int*);
/**
 * Retorna se a pilha está cheia.
 * @param Stack*
 * @return bool informando se está cheia.
 */
bool Stack_is_full(Stack*);
/**
 * Retorna se a pilha está vazia.
 * @param Stack*
 * @return bool informando se está vazia.
 */
bool Stack_is_empty(Stack*);
/**
 * Retorna a quantidade de elementos da pilha.
 * @param Stack*
 * @return unsigned int número de elementos da pilha.
 */
unsigned int Stack_size(Stack*);
#endif