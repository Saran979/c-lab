#include<stdio.h>
main()
{
	float e,m,p,c,s,t;
	float a,per;
	printf("enter english marks   :");
	scanf("%f",&e);
	printf("enter maths marks     :");
	scanf("%f",&m);
	printf("enter physics marks   :");
	scanf("%f",&p);
	printf("enter chemistry marks :");
	scanf("%f",&c);
	printf("enter social marks    :");
	scanf("%f",&s);
	printf("******************\n");
	t=e+m+p+c+s;
	a=t/5;
	per=(t/500)*100;
	printf("total      :%f\n",t);
	printf("average    :%f\n",a);
	printf("percentage :%f",per);	
}
