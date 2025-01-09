/*read n no of elements into and array and 
1. find the sum of array elements
2. display the odd elements in the array
3. display the array elements in reverse order
4. find the count of even elements in the array
5. find the smallest and largest element in the array
6. search for the element k in the array and if found print its position.
7. find the count of each and every element in the array if there are duplicates.
8. sort the array elements in descending order
9. declare two arrays A and B, read the elements and find the common element which is present in both the arrays*/

#include <stdio.h>
int main()
{
int n, arr[100], choice, sum=0;
printf("Enter the no. of array elements to be entered:\n");
scanf("%d", &n);
printf("Enter your elements: \n");
for (int i = 0; i<n; i++)
    scanf("%d", &arr[i]);

printf("Choose the option: 1. find the sum of array elements\n2. display the odd elements in the array\n3. display the array elements in reverse order\n4. find the count of even elements in the array\n5. find the smallest and largest element in the array\n6. search for the element k in the array and if found print its position.\n7. find the count of each and every element in the array if there are duplicates.\n8. sort the array elements in descending order\n9. declare two arrays A and B, read the elements and find the common element which is present in both the array\n");
scanf("%d", &choice);
switch (choice)
{
case 1:
{
for (int i = 0; i<n; i++)
sum+=arr[i];
printf("The sum of array elements is: %d\n", sum);
break;
}
case 2:
{
printf("The odd elements in the array are:\n");
for (int i = 0; i<n; i++)
{
if (arr[i] % 2 != 0)
printf("%d", arr[i]);
}
break;
}
case 3:
{
printf("The array elements in reverse order are:\n");
for (int i = n; i>=0; i--)
printf("%d", arr[i]);
break;
}
case 4:
{
int cnt=0;
for (int i = 0; i<n; i++)
{
if (arr[i] % 2 == 0)
cnt++;
}
printf("The no of even elements in the array are: %d\n", cnt);
break;
}
case 5:
{
int min=arr[0], max=arr[0];
for (int i = 0; i<n; i++)
{
if (arr[i] > max)
max = arr[i];
else if (arr[i] < min)
min = arr[i];
}
printf("The minimum and maximum values in the array are %d and %d respectively\n", min, max);
break;
}
case 6:
{
int k, found = 0;
printf("Enter the element to be searched\n");
scanf("%d", &k);
for (int i = 0; i < n; i++)
{
    if (arr[i] == k)
    {
        printf("The position of %d in the array is: %d\n", k, i);
        found = 1;
        break;
    }
}
if (!found)
{
    printf("Element %d not found in the array.\n", k);
}
break;
}
case 7:
{
int count[] = {0};
for (int i = 0; i < n; i++) {
    count[arr[i]]++;
}
printf("The count of each element in the array is:\n");
for (int i = 0; i < n; i++) {
    if (count[arr[i]] != 0) {
        printf("%d occurs %d times\n", arr[i], count[arr[i]]);
        count[arr[i]] = 0; // To avoid printing duplicates
    }
}
printf("\n");
break;
}
case 8:
{
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The array elements in descending order are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    break;
}
case 9:
{
    int m, A[100], B[100];
    printf("Enter the no. of elements in array A and B\n");
    scanf("%d", &m);
    printf("Enter the elements of array A\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the elements of array B\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    printf("The common elements in both the arrays are:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break;
            }
        }
    }
    printf("\n");
    break;
}
}
}
