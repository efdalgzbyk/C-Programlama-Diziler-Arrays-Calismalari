#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int ort,sum,A[10]={32,43,32,76,3,47,9,8,14,96},i;
	
	printf("Sayilarin toplamý ve ortalamasi:\n");
	
	for(i=0;i<10;i++){
		
		sum+=A[i];
		ort =sum/10;
		
		
	}
	printf("toplam =%d\n",sum);
	printf("Ortalamasý =%d\n",ort);
	
	
}
