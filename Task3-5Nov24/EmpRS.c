//Task3-Q1:Employeee Record System
//5Nov-24, Yasin M Hussain

#include<stdio.h>
#include<conio.h>

struct Employee 
{
    int id;
    char name[50];
    int age;
    float salary;
};

main() 
{
    int i, n;

    printf("\nEnter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
    
    for (i = 0; i < n; i++) 
	{
        printf("\nEnter details for employee %d:", i + 1);
        printf("\nEmployee ID: ");
        scanf("%d", &emp[i].id);
        printf("\nEmployee Name: ");
        scanf(" %[^\n]s", emp[i].name);  
        printf("\nEmployee Age:");
        scanf("%d", &emp[i].age);
        printf("\nEmployer Salary:");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Records:");
    printf("ID\tName\t\tAge\tSalary\n");
    for (i = 0; i < n; i++) 
	{
        printf("\n\t%d\t%-15s\t%d\t%.2f\n", emp[i].id, emp[i].name, emp[i].age, emp[i].salary);
    }

    return 0;
}
