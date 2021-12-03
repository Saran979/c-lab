#include<stdio.h>
main()
{
	char c;
	printf("enter any character:");
	scanf("%c",&c);
	if(c>=65 && c<=90)
	{
	   c=c+32;
	   printf("converted character is:%c",c);
	}
	else
	{
		c=c-32;
		printf("converted character is:%c",c);
	}	
}
