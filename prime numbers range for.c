#include<stdio.h>
main()
{
	int i,n,j,k;
	printf("enter how many numbers to check:");
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
		k=0;
	for(i=2;i<j;i++)
	{
		if(j%i==0)
		{
			k=1;break;	
		}	
	}
	if(k==0)
	printf("%d\t",j);	
    }
}

