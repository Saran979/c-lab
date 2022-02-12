#include <stdio.h>
#include <math.h>
int convert(int);
int main() 
{
  int n,k;
  printf("Enter any number:");
  scanf("%d", &n);
  k=convert(n);
  printf("binary number is:",k);
}
int convert(int x) 
{
  int p=0,r,i=1;
  while (x!=0)
   {
    r = x % 2;
    x /= 2;
    p += r * i;
    i *= 10;
    }
  return p;
}
