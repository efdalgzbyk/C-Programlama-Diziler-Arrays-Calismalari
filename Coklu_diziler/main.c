#include<stdlib.h>
#include<stdio.h>

void main(){
	int A[2][3];
	int i,j;

	printf("Lutfen 2x3 lük matrisin elemanlarýný giriniz.\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){	
			printf("A[%d][%d] = ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%4d",A[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
}
