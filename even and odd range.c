#include<stdio.h>
int main()
{
    int a,b,r,i;
    printf("enter lower limit:");
    scanf("%d",&a); 
    printf("enter upper limit");
    scanf("%d",&b); 
    printf("even numbers:\n");
    for(i=a;i<=b;i++)
	{
        r=i%2;
        if(r==0)
            printf("%d\t",i);
    }
    printf("\nodd numbers:\n");
    for(i=a;i<=b;i++)
	{
        r=i%2;
        if(r==1)
            printf("%d\t",i);
    }
}
