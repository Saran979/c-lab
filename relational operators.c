#include<stdio.h>
main()
{
	float a,b;
	printf("enter first number:");
	scanf("%f",&a);
	printf("enter second number:");
	scanf("%f",&b);
	printf("%f == %f is %d\n",a,b,a==b);
	printf("%f > %f is %d\n",a,b,a>b);
	printf("%f < %f is %d\n",a,b,a<b);
	printf("%f != %f is %d\n",a,b,a!=b);
	printf("%f >= %f is %d\n",a,b,a>=b);
	printf("%f <= %f is %d",a,b,a<=b);
}
