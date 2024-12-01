

#include <stdio.h>

int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= c)
        return b;
    else
        return c;
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Maximum = %d\n", maxOfThree(a, b, c));
    return 0;
}
