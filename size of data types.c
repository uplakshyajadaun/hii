#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    a=sizeof (char);
    b=sizeof (int);
    c=sizeof (float);
    d=sizeof (double);
    e=sizeof (void);
   printf("size of char = %d\n",a);
   printf("size of int = %d\n",b);
   printf("size of float = %d\n",c);
   printf("size of double = %d\n",d);
   printf("size of void = %d\n",e);
    return 0;
}