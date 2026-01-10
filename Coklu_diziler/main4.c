#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int A[3][3];
	int i,j,simetrik;
	
	printf("Lutfen 3x2 lik bir matris giriniz.\n");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("A[%d][%d] = ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d",A[i][j]);
		}
		printf("\n");
	}
	
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			printf("%4d",A[j][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(A[i][j]!=A[j][i])
			simetrik=0;	
		}
	}
	
	if(simetrik == 1)
		printf("Esittir.");
	else
		printf("Esit degildir.");
}
