#include<stdio.h>
main()
{
	int n,k,i;
	printf("enter any number:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
		}
		i=i+1;
	}
	
}
