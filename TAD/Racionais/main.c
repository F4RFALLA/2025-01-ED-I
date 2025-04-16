#include "Racional.h"
#include <stdio.h>
int main(){
    TRacional *f1 = TRacional_create(1,2);
    TRacional *f2 = TRacional_create(3,5);
    TRacional_print(f1);
    putchar('\n');
    TRacional_print(f2);
    putchar('\n');
    puts("Multiplica: ");
    //Queimando memória aqui...
    TRacional* temp =TRacional_mult(f1, f2); 
    TRacional_print(temp);
    TRacional_free(temp);
    puts("\nSoma: ");
    temp = TRacional_soma(f1, f2);
    TRacional_print(temp);
    TRacional_free(temp);
    TRacional_free(f1);
    TRacional_free(f2);
    return 0;
}