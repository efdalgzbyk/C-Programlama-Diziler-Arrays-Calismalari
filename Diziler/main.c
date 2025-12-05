#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int A[5]={10,32,42,1,4},min,i;
	min=A[0];
	for(i=0;i<5;i++){
		printf("%d\n",A[i]);
		if(A[i]<min){
			min=A[i];
		}
	}
		printf("dizinin min degeri =%d",min);
	
}
