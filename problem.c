#include<stdio.h>
main()
{
	float x,y,p;
	printf("enter value of x:");
	scanf("%f",&x);
	printf("enter value of y:");
	scanf("%f",&y);
	p=sqrt((x*x+y*y)/(x*x+1));
	printf("value:%f",p);
	
}
