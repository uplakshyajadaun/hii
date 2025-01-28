#include <stdio.h>

int main()
{
    int n,original_n,r=0;
    printf("Enter the value of original_n =");
    scanf("%d",&original_n);
    n=original_n;
    while(n!=0)
    {   
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    if (r==original_n)
    printf("The number is palindrom");
    else
    printf("The number is not pallindrom");
    return 0;
}