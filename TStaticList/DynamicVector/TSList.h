#ifndef TS_LIST_H
#define TS_LIST_H
#include <stdbool.h>

typedef struct _list TSList;

/**
 * Cria uma nova lista estática.
 * @return TSList* Ponteiro para a instância da lista criada. Retorna NULL em caso de falha na alocação.
 * @param unsigned int Tamanho fixo da lista
 */
TSList* TSList_create(unsigned int);

/**
 * Insere um novo elemento com o valor fornecido no final da lista.
 * @param TSList* list Ponteiro para a lista na qual o elemento será inserido.
 * @param int value Valor inteiro a ser inserido na lista.
 * @return bool Retorna true se a inserção foi bem-sucedida, false caso contrário (ex: lista nula ou falha na alocação de memória).
 */
bool TSList_insert(TSList*, int);

/**
 * Imprime os elementos da lista, separados por espaço.
 * @param TSList* list Ponteiro para a lista a ser impressa. Se a lista for nula, nada é impresso.
 */
void TSList_print(TSList* );

/**
 * Retorna a quantidade de elementos presentes na lista.
 * @param TSList* list Ponteiro para a lista da qual se deseja obter a quantidade de elementos.
 * @return unsigned int Número de elementos na lista. Retorna 0 se a lista for nula.
 */
unsigned int TSList_qty(TSList* );

/**
 * Verifica se a lista está vazia (não contém nenhum elemento).
 * @param TSList* list Ponteiro para a lista a ser verificada.
 * @return bool Retorna true se a lista estiver vazia, false caso contrário ou se o ponteiro da lista for nulo.
 */
bool TSList_is_empty(TSList* );

/**
 * Verifica se a lista está cheia. A implementação de listas simplesmente encadeadas dinâmicas geralmente não tem um limite fixo,
 * portanto, esta função pode sempre retornar false a menos que haja alguma restrição de implementação específica.
 * @param TSList* list Ponteiro para a lista a ser verificada.
 * @return bool Retorna true se a lista estiver cheia (de acordo com alguma possível restrição de implementação), false caso contrário ou se o ponteiro da lista for nulo.
 */
bool TSList_is_full(TSList* );
/* Lista de exercícios */
/**
 * Exercício 1A
 * Concatena duas listas usando as funções já existentes (TSList_insert, etc)
 * @param TSList* Lista 1
 * @param TSList* Lista 2
 * @return TSList* ponteiro para a lista criada com o resultado da concatenação
 */
TSList* TSList_concatenate_1(TSList*, TSList*);

/**
 * Exercício 1B
 * Concatena duas listas sem usar as funções já existentes (TSList_insert, etc)
 * @param TSList* Lista 1
 * @param TSList* Lista 2
 * @return TSList* ponteiro para a lista criada com o resultado da concatenação
 */
TSList* TSList_concatenate_2(TSList*, TSList*);

/**
 * Exercício 2
 * Tenta deletar os n primeiros elementos da lista.
 * @param TSList* ponteiro para a a lista
 * @param unsigned int o valor da variável n
 * @return bool informando o sucesso ou não da operação
 */
bool TSList_delete_n(TSList*, unsigned int);
#endif