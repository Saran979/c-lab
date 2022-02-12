#include<stdio.h>
int prime(int);
void main()
{
	int n,c;
	printf("enter any number:");
	scanf("%d",&n);
	c=prime(n);
	if(c==0)
	{
		printf("not a prime number");
	}
	if(c==1)
	{
		printf("prime number");
	}
}
int prime(int a)
{
	int i,b;
	   for(i=2;i<a/2;i++)
		{
			if(a%i==0)
			{
				b=0;
			}
			else
			{
				b=1;
			}
		return b;	
		}
		
}
	

