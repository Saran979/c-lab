#include<stdio.h>
main()
{
	char c;
	printf("enter any alphabet:");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':printf("%c is a vowel",c);break;
		default :printf("%c is consonant",c);break;
	}
}

