#include <stdio.h>
#define MAX 10
int main(){
    // 1 Declarar o vetor com 10 elementos
    int V[MAX], x;
    //2 Ler os dados para o vetor
    for(int i=0; i<MAX; i++)
        scanf("%d",&V[i]);
    //3 Ler o x
    scanf("%d",&x);
    //4 Passar pelos elementos do vetor, e para cada elemento divisível por x, 
    // exibi-lo na saída principal.
    for(int i=0; i<MAX; i++){
        if(V[i]%x==0)
            printf("%d ", V[i]);
    }
    putchar('\n');


    return 0;
}