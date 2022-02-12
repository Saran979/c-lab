#include<stdio.h>
main()
{
	int n,i,k,p,s;
	s=0;
	i=2;
	printf("enter any number:");
	scanf("%d",&n);
	for(n>0;k=n%10;n=n/10)
	{
		p=k*i;
		s=s+k;
		i=i++;
	}
	printf("%d",s);
}
