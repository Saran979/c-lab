#include<stdio.h>
main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	if(a==0)
	{
		printf("given number is zero");
	}
	else
	{
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else
	{
		printf("%d is negative",a);
	}
}
	
}
