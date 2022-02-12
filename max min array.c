#include<stdio.h>
main()
{
	int a[30];
	int i,max=0,min=a[0],n;
	printf("enter how many numbers:");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	} 
    printf("minimum number is %d\n",min);
    printf("maximum number is %d\n",max);	
}
