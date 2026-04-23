#include <stdio.h>

void swap(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int num1 = 10, num2 = 20;

    printf("\nBefore swap: %d, %d", num1, num2);
    swap( &num1, &num2);
    printf("\nAfter swap: %d, %d", num1, num2);

    return 0;
}