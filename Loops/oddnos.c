#include <stdio.h>
int main()
{
int n, i;
printf("Enter the range of odd no.s: \n");
scanf("%d", &n);
for (i=1; i<=n; i+=2)
{
printf("%d \t", i);
}
printf("\n");
}
