

#include <stdio.h>

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (inside function): a = %d, b = %d\n", a, b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swapValue(a, b);
    printf("After swapping (outside function): a = %d, b = %d\n", a, b);
    return 0;
}
