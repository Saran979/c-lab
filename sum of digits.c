#include<stdio.h>
main()
{
	int n,p,k;
	k=0;
	printf("enter any number:");
	scanf("%d",&n);
	while(n>0)
	{
		p=n%10;
		k=k+p;
		n=n/10;				
	}
	printf("sum of digits:%d",k);
}
