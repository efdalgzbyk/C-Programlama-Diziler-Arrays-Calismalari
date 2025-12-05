#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;

    printf("Dizi boyutunu giriniz: ");
    scanf("%d", &N);

    int A[N];

    printf("Dizi elemanlarini giriniz:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int max = A[0];
    int min = A[0];

    for (i = 1; i < N; i++) {
        if (A[i] > max) {
            max = A[i];
        }
        if (A[i] < min) {
            min = A[i];
        }
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);

    return 0;
}

