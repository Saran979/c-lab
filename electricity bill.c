#include<stdio.h>
main()
{
	float a,b,c,d,e;
	printf("enter units:");
	scanf("%f",&a);
	if(a<=50)
	{
		c=a*1;	
	}
	
	
	else
	if(a>50 && a<=100)
	{
		b=a-50;
		c=50+(b*2);
	}
	
	
	
	else
	if(a>100 && a<=150)
	{
		b=a-100;
		c=150+(b*3);
		
	}

	
	
	else
	if(a>150 && a<=200)
	{
		b=a-150;
		c=300+(b*4);
	}

	
	else
	if(a>200 && a<=250)
	{
		b=a-200;
		c=500+(b*5);
    }
	
	else
	if(a>250 && a<=300)
	{
		b=a-250;
		c=750+(b*6);
	}
	
	else
	if(a>300)
	{
		b=a-300;
		c=1050+(b*7);
	}
	
		d=(c/100)*10;
		e=c+d;
		printf("bill amount:%f",e);
}
