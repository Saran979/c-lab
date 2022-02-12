#include<stdio.h>
int armstrong(int);
void main()
{
	int n,k;
	printf("enter any number:");
	scanf("%d",&n);
	k=armstrong(n);
	if(k==0)
	{
		printf("armstrong number");
	}
	else
	if(k==1)
	{
		printf("not a armstrong number");
	}
}
int armstrong(int x)
{
	int i=0,p,r,l;
	r=x;
	for(x>0;p=x%10;x=x/10)
	{
		i=i+(p*p*p);
	}
	if(i==r)
	{
		l=0;
	}
	else
	{
		l=1;
	}
	return l;
}
