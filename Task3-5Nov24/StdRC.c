//Task3-Q2:Student Result Calculation
//5Nov-24, Yasin M Hussain

#include <stdio.h>
#include <conio.h>

struct Student 
{
    int rollNumber;
    char name[50];
    float marks[3];
};

main() 
{
    int i;
    struct Student std;
    float total = 0, average;

    printf("\nEnter roll number: ");
    scanf("%d", &std.rollNumber);
    printf("\nEnter name: ");
    scanf(" %s", std.name);

    for (i = 0; i < 3; i++) 
    {
        printf("\nEnter marks for subject %d: ", i + 1);
        scanf("%f", &std.marks[i]);
        total += std.marks[i];
    }

    average = total / 3;

    printf("\nStudent Details:\n");
    printf("\nRoll Number: %d", std.rollNumber);
    printf("\nName: %s", std.name);
    printf("\nTotal Marks: %.2f", total);
    printf("\nAverage Marks: %.2f", average);

    return 0;
}
