#include<stdio.h>
int swap(int *,int *);
int main()
{
	int a,b;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	swap(&a,&b);
	printf("first number after swaping is:%d\n",a);
	printf("second number after swaping is:%d",b);
}
int swap(int *x,int *y)
{
	int p;
	p=*x;
	*x=*y;
	*y=p;
}

