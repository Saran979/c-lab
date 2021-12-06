#include<stdio.h>
main()
{
	int a,x;
	printf("enter any number:");
	scanf("%d",&a);
	x=a%2;
	switch(x)
	{
		case 0:printf("%d is an even number",a);break;
		case 1:printf("%d is an odd number",a);break;
	}
}
