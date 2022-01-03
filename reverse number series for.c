#include<stdio.h>
main()
{
	int n,k;
	for(n=5;n>=1;n--)
	{
		for(k=1;k<=n;k++)
		{
			printf("%d\t",k);
		}
		printf("\n");
	}
}
