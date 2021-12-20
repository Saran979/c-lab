#include<stdio.h>
main()
{
	int i,n;
	i=1;
	printf("enter how many times to print:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("*\n");
		i=i+1;
	}
}
