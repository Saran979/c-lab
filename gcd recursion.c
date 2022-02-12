#include<stdio.h>
int hcf(int a, int b);
int main() 
{
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("GCD : %d",hcf(a,b));
    return 0;
}
int hcf(int a, int b) 
{
    if (b!= 0)
    return hcf(b,a%b);
    else
    return a;
}
