#include<stdio.h>
main()
{
	char c;
	printf("enter any character:");
	scanf("%c",&c);
	switch(c>='a' && c<='z' || c>='A' && c<='Z')
	{
		case 1: printf("character");break;
		case 0: switch (c>=1 && c<=9)
		         {
		         	case 1: printf("number");break;
		         	default :printf("special character");break;
		         	         
		         	        
							  
		         	
					 
				 }
	}
}

