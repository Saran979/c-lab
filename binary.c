#include<stdio.h>
int binary(int);
void main()
{
	int n,k;
	printf("enter any number:");
	scanf("%d",&n);
	k=binary(n);
	printf("binary number is:%d",k);
}
int binary(int x)
{
	int i,p;
	for(i=0;x>0;x=x/2)
	{
	p=x%2;
	i=(i*10)+p;
	}
	return i;
}


