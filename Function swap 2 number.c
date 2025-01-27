#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b = ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of a after swaping = %d\n",a);
    printf("The value of b after swaping = %d\n",b);
    return 0;
}