#include<stdio.h>
main()
{
	int i,n,p,x;
	i=1;
	p=0;
	printf("enter how many numbers:");
	scanf("%d",&n);
	while(i<=n)
	{
	printf("%d\n",i);
	p=p+i;
	i=i+1;
	}
	printf("sum:%d",p);	
}
