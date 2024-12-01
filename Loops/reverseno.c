#include <stdio.h>
int main()
{
int digit, n;
printf("Enter the number: \n");
scanf("%d", &n);
while (n>0)
{
digit = n%10;
printf("%d", digit);
n=n/10;
}
printf("\n");
}
