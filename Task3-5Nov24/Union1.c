//union1
//Yasin M Hussain, 24-10-24

#include<stdio.h>
#include<conio.h>

union car
{
	char name[20];
	float price;
};

main()
{
	union car c;
	printf ("\nEnter car name:");
	scanf("%s",c.name);
	printf ("\nEnter car price:");
	scanf("%f",&c.price);
	display(c);
}
display(union car c)
{
	printf("\nCar Name:%s",c.name);
	printf("\nCar Price:%f",c.price);
	return(0);
}
