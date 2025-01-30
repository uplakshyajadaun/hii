#include <stdio.h>

int main()
{
    float s1;
    printf("Enter the side s1 = ");
    scanf("%f",&s1);
    float s2;
    printf("Enter the side s2 = ");
    scanf("%f",&s2);
    float s3;
    printf("Enter the side s3 = ");
    scanf("%f",&s3);
    float a1;
    printf("Enter the value of a1 = ");
    scanf("%f",&a1);
    float a2;
    printf("Enter the value of a2 = ");
    scanf("%f",&a2);
    float a3;
    printf("Enter the value of a3 = ");
    scanf("%f",&a3);
   if((s1+s2>s3)&&(s2+s3>s1)&&(s1+s3>s2)&&(a1+a2+a3==180))
   {
    printf("The sides and angle of a triangle are valid");
   }
   else printf("The sides and angle of a trinagle are not valid");
    return 0;
}