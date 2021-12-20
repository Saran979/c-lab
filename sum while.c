#include<stdio.h>
main()
{
	int n,i=1,p=0,avg;
	
	printf("enter how many numbers:");
	scanf("%d",&n);
	printf("enter %d numbers:\n",n);
	while(i<=n)
	{
		scanf("%d",&i);
		p=p+i;
		i++;		
	}
	printf("sum:%d\n",p);
	avg=(float)(p/n);
    printf("average:%d",avg);
}

