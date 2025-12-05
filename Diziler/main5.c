#include<stdlib.h>
#include<stdio.h>


void main(){
	
	int A[3]={1,2,3},B[3]={1,2,3},C[3]={1,2,0},i;
	
	printf("Burada A ve B dizilerinin toplami C nin son dizisine eklenir:\n");
	
	for(i=0;i<3;i++){
		C[i] = A[i]+B[i];
	}

	
	for(i=0;i<3;i++){
		printf("A nin elemanlari : %d\n",A[i]);
	}
	
	for(i=0;i<3;i++){
		printf("B nin elemanlari : %d\n",B[i]);
	}
	
	for(i=0;i<3;i++){
		printf("C nin elemanlari : %d\n",C[i]);
	}
	
	
}
