#include<stdio.h>
int lcm(int,int);
void main()
{
	int a,b,k;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	k=lcm(a,b);
	printf("lcm of given two numbers is:%d",k);
}
int lcm(int x,int y)
{
	int i,lcm=1,max;
 	max = (x>y) ? x:y;
 	for(i=max;i>=max;i++)
 	{
 		if(i%x==0 && i%y==0)
 		{
 			lcm=i;break;
		 }
		 return i;
	}
}
