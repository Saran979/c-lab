#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter third number:");
	scanf("%d",&c);
	if(a<b && a<c)
	{
		printf("%d is small",a);
	}
	else
	if(b<c)
	{
		printf("%d is small",b);
	}
	else
	{
		printf("%d is small",c);
	}
}


