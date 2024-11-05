//Task3-Q3:Union, 
//5Nov-24,Yasin M Hussain

#include <stdio.h>
#include<conio.h>
union Data {
    char grade;
    int studentID;
    float cgpa;
};

main() 
{
    union Data data;

    printf("\nEnter Grade:");
	scanf("%c",&data.grade);
    
    printf("\n Enter Student ID:", data.studentID);
	scanf("%d",&data.studentID);

    printf("\nEnter CGPA:");
    scanf("%f",&data.cgpa);
    
    printf("\n%c",data.grade);
    printf("\n%d",data.studentID);
    printf("\n%d",data.cgpa);

    return 0;
}
