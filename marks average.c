#include<stdio.h>
main()
{
	int n,k[10],i,a,s=0;
	printf("enter student marks:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&k[i]);
		s=s+k[i];
	}
	printf("sum=%d\n",s);
	a=s/10;
	printf("average:%d",a);
}
