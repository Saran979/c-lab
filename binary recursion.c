#include <stdio.h>
int Binary(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n%2+10*Binary(n/2));
    }
}
int main()
{
    int num;
    printf("Enter decimal number: ");
    scanf("%d", &num);
    printf ("%d",Binary(num));
    return 0;
}
