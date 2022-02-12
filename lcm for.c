#include<stdio.h>
int main()
{
	int n,a,b,k,lcm=1,i;
	
	scanf("%d",&a);

	scanf("%d",&b);
	k=(a>b) ? a:b;
	for(i=k;i>=k;i++)
	{
		if(i%a==0 && i%b==0)
		{
			lcm=i;break;
		}
	}
	printf("%d",lcm);
}
