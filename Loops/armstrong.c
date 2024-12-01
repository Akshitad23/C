#include <stdio.h>
#include <math.h>
int main()
{
int digit, n, sum=0, num;
printf("Enter the number: \n");
scanf("%d", &n);
num = n;
while (n>0)
{
digit = n%10;
sum+=pow(digit, 3);
n=n/10;
}

if (num==sum)
printf("%d is an armstrong no. \n", num);
else
printf("%d is not an armstrong no. \n", num);
}
