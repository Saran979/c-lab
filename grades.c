#include<stdio.h>
main()
{
	float a;
	printf("enter marks:");
	scanf("%f",&a);
	if(a>=90)
	{
		printf("grade:A");
	}
	else
	{
		if(a>=80 && a<90)
		{
			printf("grade:B");
		}
		else
		{
		if(a>=70 && a<80)
		{
			printf("garde:C");
			}
			else
			{
				if(a>=60 && a<70)
				{
					printf("grade:D");
				}
				else
				{
					if(a>=50 && a<60)
					{
						printf("grade:E");
					}
					else
					{
						if(a<50)
						{
							printf("FAIL");
						}
					}
				}
			}	
		}		
	}
	
}
