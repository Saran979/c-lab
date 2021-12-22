#include<stdio.h>
main()
{
	int n,k;
	printf("enter number:");
	scanf("%d",&n);
	k=1;
	while(n>=1)
	{
		k=k*n;
		n=n-1;
	}
	printf("factorial:%d",k);
}
