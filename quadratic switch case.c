#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,k;
		printf("enter a value:");
	scanf("%f",&a);
		printf("enter b value:");
	scanf("%f",&b);
		printf("enter c value:");
	scanf("%f",&c);
	k=(b*b)-(4*a*c);
	switch(k==0)
	{
	case 1:	printf("roots are equal\n");
		    printf("first root is %f\n",-b/(2*a));
	     	printf("second root is %f\n",-b/(2*a));break;
	case 0: switch(k>0)
	        {
		     case 1:printf("roots are distinct\n");
	   	            printf("first root is %f\n",(-b+sqrt(k))/(2*a));
		            printf("second root is %f\n",(-b-sqrt(k))/(2*a));break;
		     case 0:printf("roots are imaginary");     
	        }	
}
}
