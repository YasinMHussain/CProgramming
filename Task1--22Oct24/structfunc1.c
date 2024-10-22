//Task1-Q1, Yasin M Hussain
//24-08-2024

#include<stdio.h>
#include<conio.h>
main()
{
struct student
{
	char name[25];
	int age;
	char grade[5];
}s;

	int i;
	
	for(i=1;i<=3;i++)
	{
	printf("Enter student name:");
	scanf("%s",s.name);
	printf("Enter student age:");
	scanf("%d",&s.age);
	printf("Enter student grade:");
	scanf("%s",s.grade);
	}

	for(i=1;i<=3;i++)
	{
	printf("\nStudent Name: %s", s.name);
	printf("\nStudent Age: %d", s.age);
	printf("\nStudent Grade: %s", s.grade);
	printf("\n------------------");
	}
	return(0);
}
