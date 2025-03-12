#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    if(argc<3){
        printf("Uso: %s divisor [valores separados por espaço]\n  ", argv[0]);
        printf("Exemplo: %s 5 1 2 3 4 5 6 7 8 9 10\n", argv[0]);
        puts("Exibira os valores que sao divisiveis por 5.");
    }
    else{
        int divisor = atoi(argv[1]);
        printf("Checando os valores que sao divisiveis por %d\n", divisor);
        for(int i=2; i<argc; i++){
            int valor = atoi(argv[i]);
            if(valor % divisor == 0)
                printf("%d ", valor);
        }
    }
    return 0;
}