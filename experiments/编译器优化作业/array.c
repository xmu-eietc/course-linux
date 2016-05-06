#include <stdio.h>

#include "include/array.h"

#define VECTOR_LENGTH 2048

void array_get(int arrayX[VECTOR_LENGTH][VECTOR_LENGTH],int arrayY[VECTOR_LENGTH][VECTOR_LENGTH],int n1,int m1,int n2,int m2){
	int i,j;
	for(i = 0 ; i < n1 ; i ++ )
	  for(j = 0 ; j < m1; j++ )
	     	scanf("%d",&arrayX[i][j]);
	for(i = 0 ; i < n2 ; i ++ )
	  for(j = 0 ; j < m2; j++ )
	     	scanf("%d",&arrayY[i][j]);
}

void array_multiply(int vector_a[VECTOR_LENGTH][VECTOR_LENGTH], int vector_b[VECTOR_LENGTH][VECTOR_LENGTH], int vector_c[VECTOR_LENGTH][VECTOR_LENGTH],int n1,int m1,int n2,int m2){
	if(m1!=n2){
	  printf("Error!\n");
	  return ;
	}
	int i,j,k;
	for(i = 0 ;i < n1; i ++)
	  for(k = 0 ;k < m2 ; k++)
	    vector_c[i][k] = 0;
	for(i = 0 ; i < n1; i++)
	  for(j = 0 ; j < m1 ;j++)
	     for(k = 0;k < m2 ; k++)
		vector_c[i][k] += vector_a[i][j]*vector_b[j][k];
}





