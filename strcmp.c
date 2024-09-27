//sting compare
//Yasin M Hussain,27-09-2024

#include<stdio.h>
#include<string.h>
main()
{
	char fname[20], sname[20];
	int x;
	printf("\nEnter first name:");
	scanf("%s",fname);
	printf("\nEnter second name:");
	scanf("%s",sname);
	x=strcmp(fname,sname);
	if(x==1)
		printf("\nThe strings are same");
	else
		printf("\nThe strings are not same");
}
