#include<stdio.h>
main()
{
	int n,i;
	printf("enter number:");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("%d\t",i);
		i=i-1;
	}	
}
