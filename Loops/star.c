// Write a C program that prints a triangle of stars. Print 1 star in row 0, 3 stars in row 1, 5 stars in 
//row 2, and so on using loops.
#include <stdio.h>
int main()
{
int n, i, j;
printf("Enter the no. of rows in the triangle: \n");
scanf("%d", &n);
for (i=0; i<n; i++)
{
    for (j=1; j<=(2*i+1); j++)
    {
    printf("*");
    }
    printf("\n");
}
}

