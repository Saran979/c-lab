#include<stdio.h>
main()
{
	int x,y,z;
	printf("enter any number x:");
	scanf("%d",&x);
	printf("enter any number y:");
	scanf("%d",&y);
	z=x,x=y,y=z;
	printf("output after swaping is:\n");
	printf("x:%d\n",x);
	printf("y:%d",y);	
}
