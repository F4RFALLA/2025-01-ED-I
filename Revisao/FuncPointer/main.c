#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct{float x, y;} TPoint;

int comp_tpoint(void *p1, void *p2){
	TPoint *pp1 = (TPoint*)p1,
	*pp2 = (TPoint*)p2;
	float res = 0.0;
	if(pp1->x == pp2->x)
		res = pp2->y - pp1->y;
	else
		res = pp2->x - pp1->x;
	
	return (res==0.0)? 0 : (res<0)? -1: 1;
}

TPoint* makePoint(float x, float y){
	TPoint* novo = (TPoint*)malloc(sizeof(TPoint));
	if(novo){
		novo->x = x;
		novo->y= y;
	}
	return novo;
}

int comp_int(void *p1, void *p2) {
	int *pp1= (int*)p1,
	*pp2= (int*)p2;
	return(*pp1 - *pp2);
}

int comp_float(void *p1, void *p2) {
	float *pp1= (float*)p1,
	*pp2= (float*)p2;
	return(*pp1 - *pp2);
}

int comp_str(void *p1, void *p2){
	return strcmp((char*) p1, (char*)p2);
}

void print_int(void* p){
	int* pp = (int*)p;
	printf("%d", *pp);
}

void print_float(void* p){
	float* pp = (float*)p;
	printf("%0.2f", *pp);
}

void print_str(void* p){
	char* pp = (char*)p;
	printf("%s", pp);
}

void print_point(void* p){
	TPoint* pp = (TPoint*)p;
	printf("(%0.2f,%0.2f)", pp->x, pp->y);
}

void printV(void** vec, unsigned int n, void (*printfun)(void*)){
	unsigned int i=0;
	for(;i<n;i++)
	{ 
		printfun(vec[i]); printf("%s", (i<n-1)? ", " : ""); 
	}
	printf("\n");
}

void genSort(void** vec, unsigned int n, int (*cmpf)(void*, void*)){

	unsigned int i,j;
	void *temp;
	for(i=0; i<n-1;i++)
		for(j=i+1; j<n; j++)
			if( (*cmpf)(vec[i], vec[j]) > 0){
				temp = vec[i]; vec[i] = vec[j]; vec[j] = temp;
			}
}

int* makeInt(int i){
	int* tmp = (int*)malloc(sizeof(int));
	*tmp = i;
	return tmp;
}

int main(){
	//int *v[6] = { makeInt(5), makeInt(2), makeInt(3), makeInt(1), makeInt(7), 		makeInt(0)};
	//char *v[6]= {strdup("Maria"), strdup("Betania"),strdup("Joao"), strdup("Jose"), strdup("Miguel"), strdup("Zuleica")};
	TPoint *v[6] = {makePoint(0.0, 0.1), makePoint(0.2, 0.3), makePoint(0.4, 0.5), makePoint(0.6, 0.7), makePoint(0.8, 0.9), makePoint(1.0, 1.1)};
	void (*printFunc)= print_point;
	int (*cmp)(void*,void*)= comp_tpoint;
	
    printV((void**)v, 6, printFunc);
	genSort((void**)v, 6, cmp);
	printV((void**)v, 6, printFunc);
	return 0;
}