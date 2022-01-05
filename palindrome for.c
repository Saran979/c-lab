#include<stdio.h>
main()
{
	int r,n,k,m;
	k=0;
	printf("enter any number:");
	scanf("%d",&n);
	m=n;
	for(n>0;k=n%10;n=n/10)
	{
	r=(r*10)+k;
	}
	printf("%d\n",r);
	if(r==m)
	{
	printf("palindrome number");
    }
    else
    {
    	printf("not a palindrome number");
	}
}
