Call by Reference

#include <stdio.h>

void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swapReference(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
