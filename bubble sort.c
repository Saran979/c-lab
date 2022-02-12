#include<stdio.h>
main()
{
	int n,i,a,k,p[100];
	printf("enter how many elements:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&p[i]);
    }
    for(i=1;i<n;i++)
    {
       for(k=0;k<(n-i);k++)
        {
    	   if(p[k]>p[k+1])
    	    {
    		a=p[k];
    		p[k]=p[k+1];
    		p[k+1]=a;
		    }
	    }
    }
    printf("after sorting:\n");
    for(i=0;i<n;i++)
      {
    	printf("%d\t",p[i]);
	  }
}
