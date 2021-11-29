#include<stdio.h>
main()
{
	int a,b,c,d,e,p;
	printf("enter no.of ten rupee notes:");
	scanf("%d",&a);
	printf("enter no.of twenty rupee notes:");
	scanf("%d",&b);
	printf("enter no.of fifty rupee notes:");
	scanf("%d",&c);
	printf("enter no.of hundred rupee notes:");
	scanf("%d",&d);
	printf("enter no.of five hundred rupee notes");
	scanf("%d",&e);
	p=(a*10)+(b*20)+(c*50)+(d*100)+(e*500);
	printf("total amount:%d",p);
}
