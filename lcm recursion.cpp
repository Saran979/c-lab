#include<stdio.h>
int lcm(int, int);   
int main()
{
    int a, b,l;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    l=lcm(a,b);
    printf("LCM is:%d",l);
    return 0;
}
int lcm(int a, int b) 
{
    static int x= 1;    
    if(x%a == 0 && x%b == 0)
    {
        return x;
    }
    else
    {
        x++;
        lcm(a,b);
        return x;
    }
}
