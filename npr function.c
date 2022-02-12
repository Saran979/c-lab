#include<stdio.h>
int fact(int);
void main()
{
	int n,r,k;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter r value:");
	scanf("%d",&r);
	k=fact(n)/fact(n-r);
	printf("npr value:%d",k);
}
int fact(int x)
{
	int i,f;
	f=1;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}
