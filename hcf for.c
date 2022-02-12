#include<stdio.h>
main()
{
	int n,a,b,k,hcf=1,i;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	k=(a<b) ? a:b;
	for(i=1;i<=k;i++)
	{
		if(a%i==0 && b%i==0)
		{
			hcf=i;
		}
	}
	printf("hcf:%d",hcf);
}
