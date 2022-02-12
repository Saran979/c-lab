#include<stdio.h>
int evenodd(int);
void main()
{
	int n,k;
	printf("enter any number:");
	scanf("%d",&n);
	k=evenodd(n);
	if(k==0)
	{
		printf("even number");
	}
	else
	if(k==1)
	{
		printf("odd number");
	}
}
int evenodd(int a)
{
	int p;
    if(a%2==0)
    {
    	p=0;
	}
	else
	{
		p=1;
	}
    return p;	
}

