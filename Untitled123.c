#include<stdio.h>
int main()
{
	int n,k,b,a;
	int reverse=0,rem; 
	printf("enter any number:");
	scanf("%d",&n);
	k=n/1000;
	b=n-(k*1000);
  
  while(b!=0)    
  {    
     rem=b%10;    
     reverse=reverse*10+rem;    
     b/=10;    
  }    
  a=(k*1000)+reverse;
  printf("%d",a);
}
