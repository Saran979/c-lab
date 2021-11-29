#include<stdio.h>
main()
{
	int a,b,c,d,e,f,p,q,r,s,t,g,h,i,j,k;
	printf("enter amount:");
	scanf("%d",&a);
	p=a/500;
	g=a%500;
	printf("500 notes:%d\n",p);
	printf("balance money:%d\n",g);
	
	q=a/100;
	h=a%100;
	printf("100 notes:%d\n",q);
		printf("balance money:%d\n",h);
		
	r=a/50;
	i=a%50;
	printf("50 notes:%d\n",r);
		printf("balance money:%d\n",i);
		
	s=a/20;
	j=a%20;
	printf("20 notes:%d\n",s);
		printf("balance money:%d\n",j);
		
	t=a/10;
	k=a%10;
	printf("10 notes:%d\n",t);
		printf("balance money:%d\n",k);
}
