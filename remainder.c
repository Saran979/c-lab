#include<stdio.h>
main()
{
	int a,b,r;
	printf("enter divident:");
	scanf("%d",&a);
	printf("enter divisor:");
	scanf("%d",&b);
	r=a-(a/b)*b;
	printf("remainder is:%d",r);
}
