#include<stdio.h>
main()
{
	int n,x,k,p;
	printf("enter one number:");
	scanf("%d",&n);
	printf("enter second number:");
	scanf("%d",&x);
	for(n>0;k=n%10;n=n/10)
	{
     for(x>0;p=x%10;x=x/10)
	    {
            if(k==p)
			printf("%d",k);     
	    }
	}
}
