#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter units:");
	scanf("%d",&a);
	if(a<=50)
	{
		b=a*1;
		d=(b/100)*10;
		e=b+d;
		printf("bill amount:%d",e);
	}
	
	
	else
	if(a>50 && a<100)
	{
		b=a-50;
		c=50+(b*2);
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	else
	if(a=100)
	{
		c=150;
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	
	
	else
	if(a>=100 && a<150)
	{
		b=a-100;
		c=150+(b*3);
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	else
	if(a=150)
	{
		c=300;
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	
	
	else
	if(a>150 && a<200)
	{
		b=a-150;
		c=300+(b*4);
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	else
	if(a=200)
	{
		c=500;
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	
	
	else
	if(a>200 && a<250)
	{
		b=a-200;
		c=500+(b*5);
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	else
	if(a=250)
	{
		c=750;
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	
	
	else
	if(a>250 && a<300)
	{
		b=a-250;
		c=750+(b*6);
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	else
	if(a=300)
	{
		c=1050;
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
	
	
	else
	if(a>300)
	{
		b=a-300;
		c=1050+(b*7);
		d=(c/100)*10;
		printf("bill amount:%d",c+d);
	}
}
