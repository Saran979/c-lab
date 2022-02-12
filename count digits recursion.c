#include <stdio.h>
int count(int a)
{
    static int c=0;
    if(a>0)
    {
        c++;
        count(a/10);
    }
    else
    {
        return c;
    }
}
int main()
{
    int n;
    int c=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    c=count(n);
    printf("Total digits in number %d is: %d\n",n,c);
}
