iv) Function with arguments and with return type

#include <stdio.h>

int add4(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", add4(a, b));
    return 0;
}
