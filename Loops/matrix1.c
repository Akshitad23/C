#include <stdio.h>
int main()
{
int n, i, j;
for (i=1; i<=2; i++)
{
    for (j=1; j<=3; j++)
    {
    printf("(%d,%d) \t", i, j);
    //printf("%d%d \t", (i, j)); this wont work as u cant have brackets or anything in the variable list
    }
printf("\n");
}
}
