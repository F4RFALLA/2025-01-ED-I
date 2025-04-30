#include "TLinkedList.h"
#include <stdio.h>




int menu(){
    int op = 5;
    printf("1 -> Inserir no fim\n");
    printf("2 -> Imprimir\n");
    printf("0 -> Sair\n");
    printf("Sua opçao: ");
    scanf("%d", &op);
    getchar();
    return op;
}

int main(){
    TLinkedList* agenda = list_create();
    int op;
    do{
        op = menu();
        switch(op){
            case 1: 
                TContato c = TContato_read_ui();
                if(list_insert_end(agenda, c))
                    puts("Inserido com sucesso!");
                else
                    puts("Erro ao inserir o contato!");
                break;
            case 2: 
                list_print(agenda);
                break;
            case 0: 
                puts("Até outra hora!");
                break;
            default: 
                puts("Opção inválida!");
        }
    }while(op!=0);
    return 0;
}