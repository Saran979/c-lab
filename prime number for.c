#include<stdio.h>
main()
{
	int i,n,k;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=2;i<(n/2);i++)
	{
		if(n%i==0)
		{
			k=0;
			printf("not a prime number");
		}
	}
	if(k==1)
	printf("prime number");
}
