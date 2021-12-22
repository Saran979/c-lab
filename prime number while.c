#include<stdio.h>
main()
{
	int n,i,p,k=0;
	printf("enter any number:");
	scanf("%d",&n);
	i=2;
	p=n/2;
	while(i<=p)
	{
		if(n%i==0)
		{
		    k=1;
			printf("not a prime number");break;
		}
		i=i+1;
	}		
    if(k==0)
    printf("prime number"); 
}

