#include <stdio.h>

void deretFibonacci(int array[], int n) {
    array[0] = 0;
    array[1] = 1;
    for (int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
}

int main() {
    int n = 10; // Panjang array
    int array[n];

    deretFibonacci(array, n);

    printf("Deret Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
