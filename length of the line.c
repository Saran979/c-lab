#include<stdio.h>
main()
{
	float x1,x2,y1,y2,l;
	printf("enter x coordinates:\n");
	printf("x1:");
	scanf("%f",&x1);
	printf("x2:");
	scanf("%f",&x2);
	printf("enter y coordinates:\n");
	printf("y1:");
	scanf("%f",&y1);
	printf("y2:");
	scanf("%f",&y2);
	l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("length of the line:%f",l);
}
