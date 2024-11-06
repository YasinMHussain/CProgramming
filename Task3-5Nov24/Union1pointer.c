//union2-using ppinter
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
	display(&c);
}
display(union car *x)
{
	printf("\nCar Name:%s",x->name);
	printf("\nCar Price:%f",x->price);
	return(0);
}
