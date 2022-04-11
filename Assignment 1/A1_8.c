#include<stdio.h>
void main()
{
    char c,z;
    int a;
    printf("Enter the character : ");
    scanf("%c",&c);
    a=(int)c;
    if(a>=65&&a<=90)
    {
        z=(char)(a+32);
        printf("Lower case of %c is %c",c,z);
    }
    else if(a>=97&&a<=122)
    {
        z=(char)(a-32);
        printf("Upper case of %c is %c",c,z);
    }
    else
    {
        printf("This is not an English alphabet, %c",c);
    }
}