#include<stdio.h>
main()
{
	int r,k,n,m;
	printf("enter any number:");
	scanf("%d",&n);
	r=0;
	m=n;
	for(n>0;k=n%10;n=n/10)
	{
		r=r+(k*k*k);
	}
	printf("%d\n",r);
	if(r==m)
	{
		printf("armstrong number");	
	}
	else
	{
		printf("not a armstrong number");
	}	
}
