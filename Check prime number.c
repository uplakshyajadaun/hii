#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
           a=1;
           break;
        }
    }
    if(n==1) printf("The number is neither prime nor composite");
    else if (a==0) printf("The number is prime");
    else printf("The number is not prime");
    return 0;
}