#include<stdio.h>
#include "TLinkedList.h"

typedef unsigned int uint;
int main(){
    TLinkedList *list;


    FILE* f = fopen("input1.txt", "r");
    if(f){
        uint n, m;
        if(fscanf(f, "%u %u", &n, &m) == 2){
            list = list_create(n, m);
            int aux;
            for(uint i=0; i<n; i++, putchar('\n'))
                for(uint j=0; j<m; j++){
                    if(fscanf(f, "%d", &aux)!=1){
                        printf("Erro ao tentar ler o elemento na posicao (%d, %d)\n", i, j);
                        return 0;
                    }
                    //Inserir (i, j, aux) caso aux !=0
                    //printf("%d ", aux);
                    if(aux != 0)
                        list_insert_end(list, aux, i, j);
                }
            list_print(list);
        }else{
            puts("Erro ao ler o numero de linhas e colunas da primeira linha");
        }
    }else{
        puts("Houve um problema ao abrir o arquivo input1.txt");
    }
    return 0;
}