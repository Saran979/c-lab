#include<stdio.h>
main()
{
	char c;
	printf("enter any character:");
	scanf("%c",&c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
    	printf("%c is a vowel",c);
	}
	else
	{
		printf("%c is a consonant",c);
	}
	
	
}
