//Display Array using function.
#include <stdio.h>
int display(int n);
int n;
int main()
{
printf("Enter the size of the array: \n");
scanf("%d", &n);
display(n);
}
int display(int n)
{
int arr[n] = {};
int i;
printf("Enter your array elements:\n");
for (i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
printf("The elements of the array entered are: \n");
int s = sizeof(arr)/sizeof(arr[0]);
for (i=0; i<s; i++)
{
printf("%d ", arr[i]);
}
printf("\n");
}
