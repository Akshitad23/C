/*define a struct name day with date, month and yr
write a c program to input 2 days and find difference in days between them*/
#include <stdio.h>
struct day
{
    int date;
    int month;
    int year;
}d1, d2;
int main()
{
    printf("Enter the first date in the format dd mm yyyy:\n");
    scanf("%d %d %d", &d1.date, &d1.month, &d1.year);
    printf("Enter the second date in the format dd mm yyyy:\n");
    scanf("%d %d %d", &d2.date, &d2.month, &d2.year);
    int days1 = d1.date + d1.month * 30 + d1.year * 365;
    int days2 = d2.date + d2.month * 30 + d2.year * 365;
    int diff = days2 - days1;
    printf("The difference in days between the two dates is: %d\n", diff);
}