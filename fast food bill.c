#include<stdio.h>
main()
{
	char c;
	int k;
	printf("burger-b : pizza-p : sandwich-s : frenchfries-f\n");
	printf("enter item:\n");
	scanf("%c",&c);
	switch(c)
	{
		case 'b' : 	printf(" ITEM        PRICE          QUANTITY\n\n");
		            printf("Burger      - 200   -           ");
					scanf("%d",&k);
					printf("bill amount:%d",(k*200));break;
					
		case 's' : 	printf(" ITEM        PRICE          QUANTITY\n\n");
		            printf("sandwich    - 150   -           ");
					scanf("%d",&k);
					printf("bill amount:%d",(k*150));break; 
					
		case 'p' : 	printf(" ITEM        PRICE          QUANTITY\n\n");
		            printf("pizza       - 500   -           ");
					scanf("%d",&k);
					printf("bill amount:%d",(k*500));break;
					
		case 'f' : 	printf(" ITEM        PRICE          QUANTITY\n\n");
		            printf("frenchfries - 50    -           ");
					scanf("%d",&k);
					printf("bill amount:%d",(k*50));break; 
		
		default :   printf("enter correct item");
	                 
	}
}
