//add two numbers using function
//Rituraj Borah-08
//25-09-2024
#include<stdio.h>

int calsum(int x, int y);
main()
{
	int a, b, sum;
	printf("\nEnter any two numbers:");
	scanf("%d %d",&a,&b); 
	sum=calsum(a,b);
	printf("\nSum=%d",sum);
	return 0;
}
calsum(int x, int y)
{
	int s;
	s = x+y;
	return(s);
}
