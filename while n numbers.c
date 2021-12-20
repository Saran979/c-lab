#include<stdio.h>
main()
{
	int i,n;
	i=0;
	printf("enter how many numbers to print:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i=i+1;
	}
}
