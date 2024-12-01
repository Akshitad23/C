(i) Function without arguments and without return type

#include <stdio.h>

void add1() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}

int main() {
    add1();
    return 0;
}
