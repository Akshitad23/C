#include <stdio.h>
int main()
{
int n, i;
printf("Enter the range of even no.s: \n");
scanf("%d", &n);
for (i=0; i<=n; i+=2)
{
printf("%d \t", i);
}
printf("\n");
}
