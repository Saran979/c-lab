#include<stdio.h>
main()
{
	char c;
	printf("enter any character:");
	scanf("%c",&c);
	switch(c>=65 && c<=90)
	{
	case 1:c=c+32;
	       printf("converted character is:%c",c);break;
	case 0:switch(c>=97 && c<=122)
            {
			case 1:c=c-32;
		            printf("converted character is:%c",c);break;	
		    case 0:switch(c>='0' && c<='9')
		            {
		   	        case 1: printf("entered character is number");break;
		            }
		      
            } 
    }
}
