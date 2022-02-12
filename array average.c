#include<stdio.h>
main()
{
	int n,k[20],i,a,s=0;
	printf("enter how many numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
		s=s+k[i];
	}
	printf("sum=%d\n",s);
	a=s/n;
	printf("average:%d",a);
}
