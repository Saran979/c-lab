#include<stdio.h>
main()
{
	int n,k[10],i,a,s;
	printf("enter how many numbers:");
	scanf("%d",&n);
	printf("enter numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&k[i]);
	}
   printf("enter any number:");
   scanf("%d",&a);
   for(i=0;i<5;i++)
   {
   	if(a==k[i])
   	{
   		s=0;
   		printf("yes");
	   }
   }
   if(s==1)
   printf("no");
}
