#include<stdio.h>
main()
{
	int a;
	printf("enter any year:");
	scanf("%d",&a);
	if(a%4==0 && a%400==0 || a%100!=0)
	{
		printf("%d is a leap year",a);
	}
	else
	{
		printf("%d is a not leap year",a);
	}
}
