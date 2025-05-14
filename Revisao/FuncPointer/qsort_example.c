#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compmi(const void *m1, const void *m2)
{
	float* p1 = (float*) m1, *p2 = (float*) m2;
	return *p1 - *p2;
}
static int comp_int(const void *m1, const void *m2)
{
	int* p1 = (int*) m1, *p2 = (int*) m2;
	return *p2 - *p1;
}

int main(int argc, char **argv)
{
	int i;
	float v[5] = {3.2, 2.1, 1.0, 0.1, -1.1};
	int v_int[] = {2, 5, -5, 6, 7, 10, 6};
	qsort(v, 5, sizeof(float), compmi);
	qsort(v_int, 7, sizeof(int), comp_int);
	for(i=0; i<7; i++) 
		printf("%d, ", v_int[i]);
	putchar('\n');
	for (i = 1; i < argc; i++) {
		float key = atof(argv[i]), *res;
		res = bsearch(&key, v, 5,
		sizeof(float), compmi);
		if (res == NULL)
			printf("'%s': Este numero nao foi encontrado\n", argv[i]);
		else
			printf("%f foi encontrado\n", (float)*res);
	}
	exit(EXIT_SUCCESS);
}