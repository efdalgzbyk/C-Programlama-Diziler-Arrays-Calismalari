#include<stdlib.h>
#include<stdio.h>

void main(){
	
	int A[7],i=0,sayi;
	
	printf("Lutfen 7 tane dizi eleman sayisi giriniz.\n");
	for(i=0;i<7;i++){
		scanf("%d",&sayi);
		A[i]=sayi;
	}
	
	i=6;
	while(i!=-1){
		printf("%d\n",A[i--]);
	}
	
}
