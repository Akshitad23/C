//linear search
#include <stdio.h>
int search();
int n,i,ele;
int arr[10];
int main()
{
printf("Enter the size of the array: \n");
scanf("%d", &n);
printf("Enter the elements in the array: \n");
for (i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
search();
}
int search()
{
printf("Enter the element to be searched in array:\n");
scanf("%d", &ele);
int s = sizeof(arr)/sizeof(arr[0]);
int cnt=0;
for (i=0; i<s; i++)
{
if (arr[i] == ele)
{
printf("The element is present at the index %d \n", i);
cnt++;
}
}
if (cnt == 0)
printf("The element does not exist in the array.\n");
}
