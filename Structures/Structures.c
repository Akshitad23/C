/*write a c program to store the details of an employee:
employee id(int), name(char arr), basic salary, HRA (5% of basic salary), DA (10% of basic salary). And calc 
1. total salary of each employee.
2. Sort the employee name in descending order of total salary.
3. if two employees have the same salary, sort them in alphabetic order, and display the names */
#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[100];
    float basic_sal;
    float HRA;
    float DA;
    float total_salary;
}emp[100];

int main()
{
    int n;
    printf("Enter the no. of employees:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the employee id:\n");
        scanf("%d", &emp[i].id);
        printf("Enter the employee name:\n");
        scanf("%s", emp[i].name);
        printf("Enter the basic salary of the employee:\n");
        scanf("%f", &emp[i].basic_sal);
        emp[i].HRA = 0.05 * emp[i].basic_sal;
        emp[i].DA = 0.1 * emp[i].basic_sal;
        emp[i].total_salary = emp[i].basic_sal + emp[i].HRA + emp[i].DA;
    }
   for (int i = 0; i<n; i++)
   {
    for (int j = i+1; j<n; j++)
    {
        if (emp[i].total_salary < emp[j].total_salary)
        {
            struct employee temp = emp[i];
            emp[i] = emp[j];
            emp[j] = temp;
        }
        else if (emp[i].total_salary == emp[j].total_salary)
        {
            if (strcmp(emp[i].name, emp[j].name) > 0)
            {
                struct employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
   }
printf("\nEmployee details in descending order of total salary:\n");
for (int i = 0; i < n; i++)
{
    printf("ID: %d, Name: %s, Total Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].total_salary);
}
}