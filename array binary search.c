#include <stdio.h>
int main()
{
  int a,b,i, mid, n, search, c[100];
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter numbers:");
  	for(i=0; i<n; i++)
  	{  
    scanf("%d",&c[i]);
    }
  printf("Enter value to find\n");
  scanf("%d", &search);
  
  a = 0;
  b = n - 1;
  mid = (a+b)/2;
  
  while (a<=b) 
  {
    if (c[mid]<search)
    {
      a = mid+1;
    }
    else if (c[mid]==search) 
	{
      printf("%d found at location %d\n", search, mid+1);
      break;
    }
    else
      b= mid-1;

    mid = (a+b)/2;
  }
  if (a>b)
    printf("Not found! %d\n", search);
}
