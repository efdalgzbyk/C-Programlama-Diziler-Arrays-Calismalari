#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int A[5][2],i,j,sum,sum1;
	
	printf("Lutfen 5x2 lik bir matris giriniz.\n");
	
	
	//Matris oluþturma.
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			printf("A[%d][%d] = ",i,j);
			scanf("%d",&A[i][j]);
		}
	}	

	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			sum = 0;
			sum = A[i][j]*A[j][i];
			sum1 += sum; 
		}
	}

	printf("sum = %d",sum1);
	
}

