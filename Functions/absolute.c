

#include <stdio.h>

int absoluteValue(int x) {
    return x < 0 ? -x : x;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Absolute value = %d\n", absoluteValue(num));
    return 0;
}
