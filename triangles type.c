#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter first angle:");
	scanf("%d",&a);
	printf("enter second angle:");
	scanf("%d",&b);
	printf("enter third angle:");
	scanf("%d",&c);
	if(a==b && b==c)
	{
		printf("equilateral triangle");
	}
	else
	if(a==b || b==c || c==a)
	{
		printf("isoceles triangle");
	}
	else
	{
		printf("scalene triangle");
	}
}
