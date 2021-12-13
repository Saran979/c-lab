#include<stdio.h>
main()
{
	int x,y,z;
	printf("enter first number:");
	scanf("%d",&x);
	printf("enter second number:");
	scanf("%d",&y);
	printf("enter third number:");
	scanf("%d",&z);
	switch(x>y && x>z)
	{
		case 1: printf("%d is maximum",x);break;
		case 0: switch(y>z)
		        {
		        	case 1: printf("%d is maximum",y);break;
		        	case 0: printf("%d is maximum",z);
				}
	}
}
