#include<stdio.h>
int Prime(int, int);
int main()
{
    int n,p;
    printf("Enter a number:");
    scanf("%d",&n);
    p=Prime(n,n/2);
    if(p==1)
    {
        printf("a prime number");
    }
    else
    if(p==0)
    {
    	printf("not a prime number");
	}
    return 0;
}
int Prime(int n,int i)
{
    if(i == 1)
        return 1;   
    else
    {
        if(n%i == 0)
            return 0;
        else
            Prime(n,i-1);    
    }
}
