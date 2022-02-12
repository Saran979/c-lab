#include <stdio.h>
 
int fact(int);
 
void main()
{
 int p,a;
  	printf("Enter a number \n");
  	scanf("%d",&p);
  	a=fact(p);
    printf("Factorial of %d = %d\n",p,a);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
