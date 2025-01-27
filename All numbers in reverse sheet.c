#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i=n;i<=n;i--)
    {
        if(i==0)
        break;
        {
            printf("%d\n",i);
        }
    }
    return 0;
}