#include<stdio.h>
main()
{
	int n,i;
	i=0;
	printf("enter number:\n");
	while(n>=0)
	{
		scanf("%d",&n);
		i=i+1;
	}
	printf("number of values:%d",i-1);
}
