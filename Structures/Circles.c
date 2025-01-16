/*Define a struct named circle to represent a circle with radius r. 
write a c program to clac the area and perimeter of two circles and display the result*/
#include <stdio.h>
struct circle
{
    float r;
    float area;
    float perimeter;
}c1, c2;
int main()
{
    printf("Enter the radius of the first circle:\n");
    scanf("%f", &c1.r);
    printf("Enter the radius of the second circle:\n");
    scanf("%f", &c2.r);
    c1.area = 3.14 * c1.r * c1.r;
    c1.perimeter = 2 * 3.14 * c1.r;
    c2.area = 3.14 * c2.r * c2.r;
    c2.perimeter = 2 * 3.14 * c2.r;
    printf("The area of the first circle is: %.2f\n", c1.area);
    printf("The perimeter of the first circle is: %.2f\n", c1.perimeter);
    printf("The area of the second circle is: %.2f\n", c2.area);
    printf("The perimeter of the second circle is: %.2f\n", c2.perimeter);
}