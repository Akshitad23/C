#include <stdio.h>
int main()
{
int i;
for (i=1; i<=5; i++); //prints 6 as the whole loop incrementation is done and then loop is terminated
{
printf("%d \n", i);
}
for ( ; ; ) // infinite loop
{
printf("%d \n", i);
}
}
