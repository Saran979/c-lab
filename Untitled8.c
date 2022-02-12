#include <stdio.h>
int main ()
{
    int n=0,i=0,a=0,b=0,k=0;
    scanf ("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &array[i]);
    }
    a= array[0];
    b= array[1];
 
    if (a<b)
    {
        k=a;
        a=b;
        b=k;
    }
 
    for (i=2;i<n;i++)
    {
        if (array[i] >a)
        {
            b=a;
            a= array[i];
        }
        else if (array[i] > b && array[i] != a)
        {
            b = array[i];
        }
    }
     printf("largest=%d",a);
     printf("second largest=%d",b);
}
