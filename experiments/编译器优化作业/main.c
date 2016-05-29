#include <stdio.h>
#include <time.h>

#include "include/calculator.h"

#include "include/array.h"

#define VECTOR_LENGTH 2048

int n1,m1,n2,m2;

int main(void) {

	int vector_a[VECTOR_LENGTH][VECTOR_LENGTH], vector_b[VECTOR_LENGTH][VECTOR_LENGTH], vector_c[VECTOR_LENGTH][VECTOR_LENGTH];

	double time_start, time_end;	
	
	scanf("%d%d%d%d",&n1,&m1,&n2,&m2);

	array_get(vector_a,vector_b,n1,m1,n2,m2);

	time_start = clock();
	
	array_multiply(vector_a, vector_b, vector_c,n1,m1,n2,m2);

	time_end = clock();

	//array_print(vector_c, VECTOR_LENGTH);
	
	printf("Time used: %10.9f\n", (double) ( (time_end - time_start) / 1000.0) );

	return 0;
}



