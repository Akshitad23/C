

#include <stdio.h>

void evenOdd(int x) {
    if (x % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    evenOdd(num);
    return 0;
}
