#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int A[2][3];
	int i,j,sum=0;
	
	printf("Lutfen 2x3 luk bir matris giriniz.<\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("A[%d][%d]",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%4d",A[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			sum += A[i][j];
		}
	}	
	printf("sum = %d",sum);
	
	
}
