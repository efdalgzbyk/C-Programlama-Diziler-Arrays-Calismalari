#include <stdio.h>

int main() {

    int A[3][3];
    int sum[3];
    int i, j;

    // Matris elemanlarýný alma
    printf("3x3 A matrisini giriniz:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Satýr toplamlarýný hesapla
    for(i = 0; i < 3; i++){
        sum[i] = 0;
        for(j = 0; j < 3; j++){
            sum[i] += A[i][j];
        }
    }

    // Dizi olarak yazdýr (array formatýnda)
    printf("\nSatir toplam dizisi: [ ");
    for(i = 0; i < 3; i++){
        printf("%d", sum[i]);
        if(i != 2) printf(", ");
    }
    printf(" ]\n");

    return 0;
}

