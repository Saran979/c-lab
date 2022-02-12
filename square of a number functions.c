#include<stdio.h>
int square(int);
void main()
{
	int n,k;
	printf("enter any number:");
	scanf("%d",&n);
	k=square(n);
	printf("square of a given number is:%d",k);
}
int square(int x)
{
	int a;
	a=x*x;
	return a;
}

