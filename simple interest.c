#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,s;
	printf("enter principle amount:");
	scanf("%f",&p);
	printf("enter time:");
	scanf("%f",&t);
	printf("enter rate:");
	scanf("%f",&r);
	s=(p*t*r)/100;
	printf("simple interest:%f",s);
}
