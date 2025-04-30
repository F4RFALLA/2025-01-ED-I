#include "Racional.h"
#include <stdlib.h>
#include <stdio.h>

struct _racional{
    int num, den;
};
/**
 * Cria números racionais
 * @param int numerador
 * @param int denominador
 * @return TRacional* instância para um Racional
 */
TRacional* TRacional_create(int num, int den){
    //Nao aceita criar frações cujo denominador eh igual a 0
    if(den == 0)
        return NULL;

    TRacional* novo = malloc(sizeof(TRacional));
    if(novo){
        novo->num = num;
        novo->den = den;
    }
    return novo;
}
/**
 * Soma dois números racionais
 * @param TRacional* primeiro numero
 * @param TRacional* segundo numero
 * @return TRacional* instância para o resultado da soma
 */
TRacional* TRacional_soma(TRacional* f1, TRacional* f2){
    TRacional* result = NULL;
    if(f1!=NULL && f2!=NULL){
        int den = f1->den*f2->den;
        int num = f1->num*f2->den+f1->den*f2->num;
        result = TRacional_create(num, den);
    }
    return result;
}
/**
 * Multiplica dois números racionais
 * @param TRacional* primeiro numero
 * @param TRacional* segundo numero
 * @return TRacional* instância para o resultado
 */
TRacional* TRacional_mult(TRacional* f1, TRacional* f2){
    if(f1!= NULL && f2!=NULL){
        return TRacional_create(f1->num * f2->num, f1->den*f2->den);
    }
    return NULL;
}
/**
 * Testa se dois números racionais são iguais
 * @param TRacional* primeiro numero
 * @param TRacional* segundo numero
 * @return bool informando sobre o resultado do teste de igualdade
 */
//TODO... 
bool TRacional_iguais(TRacional*, TRacional*);

void TRacional_print(TRacional* f){
    if(f!=NULL){
        printf("%d/%d", f->num, f->den);
    }
}

void TRacional_free(TRacional* f){
    free(f);
}