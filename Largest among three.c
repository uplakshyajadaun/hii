#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b = ");
    scanf("%d",&b);
    int c;
    printf("Enter the value of c = ");
    scanf("%d",&c);
    if((a>b)&&(a>c))
    {
        printf("The a is largest");
    }
    else if((b>a)&&(b>c))
    {
        printf("The b is largest");
    }
    else printf("The c is largest");
    return 0;
}