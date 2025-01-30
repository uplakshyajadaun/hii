#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character=");
    scanf("%c",&ch);
    switch(ch)
    {
     case 'a':printf("The alphabate is vowel");
     break;
     case 'e':printf("The alphabate is vowel");
     break;
     case 'i':printf("The alphabate is vowel");
     break;
     case 'o':printf("The alphabate is vowel");
     break;
     case 'u':printf("The alphabate is vowel");
     break;
     case 'A':printf("The alphabate is vowel");
     break;
     case 'E':printf("The alphabate is vowel");
     break;
     case 'I':printf("The alphabate is vowel");
     break;
     case 'O':printf("The alphabate is vowel");
     break;
     case 'U':printf("The alphabate is vowel");
     break; 
     default:printf("The alphabet is consonent");
    }
    return 0;
}