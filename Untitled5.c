#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	printf("enter elements for 1st matrix");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	printf("enter elements for 2nd matrix");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&b[i][j]);
	printf("Difference of entered matrices a and b \n");
	for (i=0; i<3;i++)   
    {  
        for (j=0; j<4; j++)   
        {  
            c[i][j] = a[i][j] - b[i][j];  
            printf("%d\t", c[i][j]);  
        }  
        printf("\n");  
    }  
}
