(iii) Function with arguments and without return type

#include <stdio.h>

void add3(int a, int b) {
    printf("Sum = %d\n", a + b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    add3(a, b);
    return 0;
}
 
