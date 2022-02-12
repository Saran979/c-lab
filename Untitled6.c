#include<stdio.h>
int main()
{
	int n,k[20],i,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
		s=s+k[i];
	}
	printf("%d",s);
}
