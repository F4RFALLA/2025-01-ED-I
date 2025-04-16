#ifndef RACIONAL_H
#define RACIONAL_H
#include <stdbool.h>

typedef struct _racional TRacional;
/**
 * Cria números racionais
 * @param int numerador
 * @param int denominador
 * @return TRacional* instância para um Racional
 */
TRacional* TRacional_create(int, int);
/**
 * Soma dois números racionais
 * @param TRacional* primeiro numero
 * @param TRacional* segundo numero
 * @return TRacional* instância para o resultado da soma
 */
TRacional* TRacional_soma(TRacional*, TRacional*);
/**
 * Multiplica dois números racionais
 * @param TRacional* primeiro numero
 * @param TRacional* segundo numero
 * @return TRacional* instância para o resultado
 */
TRacional* TRacional_mult(TRacional*, TRacional*);
/**
 * Testa se dois números racionais são iguais
 * @param TRacional* primeiro numero
 * @param TRacional* segundo numero
 * @return bool informando sobre o resultado do teste de igualdade
 */
bool TRacional_iguais(TRacional*, TRacional*);
/**
 * Imprime a fração
 * @param TRacional* instância da fração
 */
void TRacional_print(TRacional*);

void TRacional_free(TRacional*);
#endif