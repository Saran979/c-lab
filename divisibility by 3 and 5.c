#include<stdio.h>
main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	if(a%3==0)
	{
		if(a%5==0)
		{
		printf("%d is divisible by 3 and 5 ",a);}
			}
			else 
			{
				printf("%d is not divisible by 3 and 5",a);
			}
}
