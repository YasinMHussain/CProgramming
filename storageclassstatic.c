//storage class(auto+static)
//Yasin M Hussain, 27-09-2024

#include<stdio.h>
main()
{
	sample();
	sample();
	sample1();
	sample1();
}
sample()
{
	int x=20;  //storage class auto
	x+=10;
	printf("%d\n",x);
}
sample1()
{
	static int x=20;  //storage class static
	x+=10;
	printf("%d\n",x);
}

