/*2D arrays
read the elements into 2d array and perform the following:
1. find the transpose of the matrix
2. find the sum of elements in each row
3. find the sum of diagonal elements
4. print the upper triangular matrix
5. read two 2d arrays, A and B and find the sum of elements of both the arrays. (condition: no. of rows and columns should be same)*/

#include <stdio.h>
int main()
{
    int n, m, arr[100][100], choice, sum = 0;
    printf("Enter the no. of rows and columns of the 2D array:\n");
    scanf("%d %d", &n, &m);
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("Choose the option: 1. find the transpose of the matrix\n2. find the sum of elements in each row\n3. find the sum of diagonal elements\n4. print the upper triangular matrix\n5. read two 2D arrays, A and B and find the sum of elements of both the arrays.\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("The transpose of the matrix is:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%d ", arr[j][i]);
            printf("\n");
        }
        break;
    }
    case 2:
    {
        printf("The sum of elements in each row is:\n");
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 0; j < m; j++)
                sum += arr[i][j];
            printf("The sum of elements in row %d is: %d\n", i + 1, sum);
        }
        break;
    }
    case 3:
    {
        sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i][i];
        printf("The sum of diagonal elements is: %d\n", sum);
        break;
    }
    case 4:
    {
        printf("The upper triangular matrix is:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
            if (i <= j)
                printf("%d ", arr[i][j]);
            else
                printf("0 ");
            }
            printf("\n");
        }
        break;
        }
        
    case 5:
    {
        int A[100][100], B[100][100];
        printf("Enter the elements of 2D array A:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                scanf("%d", &A[i][j]);
        }
        printf("Enter the elements of 2D array B:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                scanf("%d", &B[i][j]);
        }
        printf("The sum of elements of both the arrays is:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                printf("%d ", A[i][j] + B[i][j]);
            printf("\n");
        }
        break;
    }
}
}
