#include<stdio.h>
int perfect(int);
void main()
{
	int n,k;
	printf("enter any number:");
	scanf("%d",&n);
	k=perfect(n);
	if(k==0)
	{
		printf("perfect number");
	}
	else
	if(k==1)
	{
		printf("not a perfect number");
	}
}
int perfect(int x)
{
	int i,p,g,a;
	p=0;
	g=x;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			p=p+i;
		}
	}
	if(p==g)
	{
		a=0;
	}
	else
	{
		a=1;
	}
	return a;
}
