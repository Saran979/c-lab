#include<stdio.h>
#include<math.h>
int main(void)
{ 
double interval,x;
int i;
for(i =0;i<30;i++)
{
 interval=i/10;
 x=fabs(sin(interval));
 printf("sin(%lf) = %lf\t",interval,x);
}
return 0;
}
