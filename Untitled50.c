#include<stdio.h>
main()
{
	int r,n,k,i,p,s,x;
	s=0;
	i=1;
	printf("enter any number:");
	scanf("%d",&n);
	for(n>0;k=n%10;n=n/10)
	{
	r=(r*10)+k;
	}
	printf("%d\n",r);

	for(r>0;r=r/10)
	{
		x=r%10
		p=x*i;
		s=s+p;
		i=i+1;
	}
	printf("%d",s);
}
