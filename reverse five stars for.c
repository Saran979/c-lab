#include<stdio.h>
main()
{
	int n,k;
	for(n=1;n<=5;n++)
	{
		for(k=5;k>=n;k--)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
