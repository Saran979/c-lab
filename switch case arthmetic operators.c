#include<stdio.h>
main()
{
	float a,b;
	char k;
	printf("enter any arthmetic operator:");
	scanf("%c",&k);
	printf("enter first number:");
	scanf("%f",&a);
	printf("enter second number:");
	scanf("%f",&b);
	switch (k)
	{
			case '+':printf("%f + %f = %f",a,b,a+b);break;
			case '-':printf("%f - %f = %f",a,b,a-b);break;
			case '/':printf("%f / %f = %f",a,b,a/b);break;
			case '*':printf("%f * %f = %f",a,b,a*b);break;
	}
	
}
