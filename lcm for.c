#include<stdio.h>
main()
{
	int n,a,b,k,lcm=1,i;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	k=(a>b) ? a:b;
	for(i=k;i>=k;i++)
	{
		if(i%a==0 && i%b==0)
		{
			lcm=i;break;
		}
	}
	printf("lcm:%d",lcm);
}
