

#include <stdio.h>

int area(int side) {
    return side * side;
}

int perimeter(int side) {
    return 4 * side;
}

int main() {
    int side;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    printf("Area = %d\n", area(side));
    printf("Perimeter = %d\n", perimeter(side));
    return 0;
}
